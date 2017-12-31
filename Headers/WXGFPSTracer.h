//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSString;

@interface WXGFPSTracer : NSObject
{
    _Bool _prepared;
    _Bool _tracking;
    _Bool _firstUpdate;
    double _previousFrameTimestamp;
    CADisplayLink *_displayLink;
    unsigned int _maxFrameDroppedCount;
    double _totalFrameTime;
    long long _totalFrameDrop;
    id <FPSTracerDelegate> _delegate;
    NSString *_currentScene;
}

@property(retain, nonatomic) NSString *currentScene; // @synthesize currentScene=_currentScene;
@property(nonatomic) __weak id <FPSTracerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addFrameTime:(double)arg1 singleFrameTime:(double)arg2;
- (void)_update;
- (void)_tearDownCADisplayLink;
- (void)_setUpCADisplayLink;
- (_Bool)prepare;
- (void)stopTrack;
- (void)startTrack;
- (void)dealloc;
- (id)initWithFrameDropCount:(unsigned int)arg1;
- (id)init;

@end

