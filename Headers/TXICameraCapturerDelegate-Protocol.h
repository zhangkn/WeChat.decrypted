//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TXSVFrame;

@protocol TXICameraCapturerDelegate <NSObject>

@optional
- (void)onCameraCaptureFrame:(TXSVFrame *)arg1;
- (void)onCameraCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 correctAngle:(long long)arg2 frontCamera:(_Bool)arg3 timestamp:(unsigned long long)arg4;
@end

