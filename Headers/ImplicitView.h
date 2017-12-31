//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSArray;

@interface ImplicitView : UIImageView
{
    unsigned long long m_curFrameIndex;
    NSArray *m_frames;
    double m_nextTimeToFlashFrame;
    _Bool _hasStartAnimation;
    int _residueNumForRebound;
    double _speedX;
    double _speedY;
    double _accelerationY;
    double _scaleSpeed;
}

@property(nonatomic) double scaleSpeed; // @synthesize scaleSpeed=_scaleSpeed;
@property(nonatomic) _Bool hasStartAnimation; // @synthesize hasStartAnimation=_hasStartAnimation;
@property(nonatomic) double accelerationY; // @synthesize accelerationY=_accelerationY;
@property(nonatomic) double speedY; // @synthesize speedY=_speedY;
@property(nonatomic) double speedX; // @synthesize speedX=_speedX;
@property(nonatomic) int residueNumForRebound; // @synthesize residueNumForRebound=_residueNumForRebound;
- (void).cxx_destruct;
- (void)flashFrameWithTimeInterval:(double)arg1;
- (void)updateFrameWithBottomBoundaryY:(double)arg1;
- (void)setImplicitFrames:(id)arg1;

@end

