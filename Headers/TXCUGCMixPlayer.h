//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TXIAudioPlayDelegate.h"

@class NSString, TXCAudioReader, TXCBGMPlayer, TXSAudioPacket;

@interface TXCUGCMixPlayer : NSObject <TXIAudioPlayDelegate>
{
    struct TXCAudioSpeeder *_audioReadSpeeder;
    TXCBGMPlayer *_player;
    TXCAudioReader *_audioReader;
    unsigned long long _hasPlayLen;
    unsigned long long _preHasPlayLen;
    unsigned long long _progressNotifyFreq;
    int _srcTrack;
    int _desTrack;
    TXSAudioPacket *_desAudioInfo;
    _Bool _isPlayMix;
    float _startTime;
    _Bool _hasFinishRead;
    _Bool _playFirstFrame;
    unsigned long long _hasMixLen;
    float _playProgress;
    struct TXCMutex _readerMutex;
    struct AudioBuffer _readerCache;
    struct TXCResampleMixer _effector;
    struct TXCMutex _effectMutex;
    struct TXCMutex _playerMutex;
    _Bool _isStart;
    _Bool _isPause;
    float _desVolume;
    float _srcVolume;
    float _playRate;
    id <TXIMixPlayDelegate> _delegate;
    CDUnknownBlockType _beginNotify;
    CDUnknownBlockType _progressNotify;
    CDUnknownBlockType _completeNotify;
}

+ (id)sharedInstance;
@property(copy) CDUnknownBlockType completeNotify; // @synthesize completeNotify=_completeNotify;
@property(copy) CDUnknownBlockType progressNotify; // @synthesize progressNotify=_progressNotify;
@property(copy) CDUnknownBlockType beginNotify; // @synthesize beginNotify=_beginNotify;
@property(nonatomic) float playRate; // @synthesize playRate=_playRate;
@property(nonatomic) float srcVolume; // @synthesize srcVolume=_srcVolume;
@property(nonatomic) float desVolume; // @synthesize desVolume=_desVolume;
@property(readonly, nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(readonly, nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(retain, nonatomic) id <TXIMixPlayDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onPlayPcmData:(id)arg1;
- (unsigned long long)getCurMixProgress;
- (float)getMixAudioDuration:(id)arg1;
- (struct AudioBuffer)getAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)mixData:(char *)arg1 withLen:(int)arg2;
- (_Bool)seekFrames:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (_Bool)resetFile:(id)arg1 from:(float)arg2 to:(float)arg3;
- (_Bool)readAudioFromFile:(float)arg1 toTime:(float)arg2;
- (_Bool)resumeMixPlay;
- (_Bool)pauseMixPlay;
- (_Bool)stopMixPlay;
- (_Bool)setDelegateBlock:(CDUnknownBlockType)arg1 withProgressNotify:(CDUnknownBlockType)arg2 andCompleteNotify:(CDUnknownBlockType)arg3;
- (_Bool)startMixPlayForFile:(id)arg1 withDesInfo:(id)arg2 from:(float)arg3 to:(float)arg4 playMix:(_Bool)arg5;
- (id)initPrivate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

