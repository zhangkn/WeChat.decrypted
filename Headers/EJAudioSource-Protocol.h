//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class EJFileSystem, NSObject<EJAudioSourceDelegate>, NSString;

@protocol EJAudioSource
@property(nonatomic) NSObject<EJAudioSourceDelegate> *delegate;
@property(nonatomic) float currentTime;
@property(nonatomic) float duration;
- (void)setPlaybackRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (void)setLooping:(_Bool)arg1;
- (void)pause;
- (void)play;
- (id)initWithPath:(NSString *)arg1 fileSystem:(EJFileSystem *)arg2;
@end

