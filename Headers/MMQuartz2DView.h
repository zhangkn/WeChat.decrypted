//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IMMQuartz2DContextDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface MMQuartz2DView : UIView <IMMQuartz2DContextDelegate>
{
    NSMutableArray *_drawObjs;
    NSMutableDictionary *_context;
    double _lineWidth;
    int _lineCap;
    int _lineJoin;
    double _miterLimit;
    long long _touchId;
    NSMutableDictionary *_touches;
    _Bool _touched;
    _Bool _haveCliped;
    unsigned int _canvasId;
    int _interactionMode;
    NSString *_userData;
    id <IMMQuartz2DDelegate> _canvasDelegate;
    NSMutableArray *_transformStacks;
    NSArray *_gradient;
}

@property(retain, nonatomic) NSArray *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) NSMutableArray *transformStacks; // @synthesize transformStacks=_transformStacks;
@property(nonatomic) __weak id <IMMQuartz2DDelegate> canvasDelegate; // @synthesize canvasDelegate=_canvasDelegate;
@property(nonatomic) int interactionMode; // @synthesize interactionMode=_interactionMode;
@property(retain, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(nonatomic) unsigned int canvasId; // @synthesize canvasId=_canvasId;
- (void).cxx_destruct;
- (id)getImageDataWithTargetRect:(struct CGRect)arg1;
- (id)getImage;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)onLongPress:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (long long)getTouchID:(id)arg1 remove:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)getmiterLimit;
- (void)setMiterLimit:(double)arg1;
- (int)getLineJoin;
- (void)setLineJoin:(int)arg1;
- (int)getLineCap;
- (void)setLineCap:(int)arg1;
- (double)getLineWidth;
- (void)setLineWidth:(double)arg1;
- (void)resetGradient;
- (id)getGradient;
- (double)getContextHeght;
- (void)restoreContext:(struct CGContext *)arg1;
- (void)saveContext:(struct CGContext *)arg1;
- (void)setTranslate:(double)arg1 translateY:(double)arg2;
- (void)setRotate:(double)arg1;
- (void)setScale:(double)arg1 scaleY:(double)arg2;
- (void)setContext:(id)arg1 forKey:(id)arg2;
- (id)getContext:(id)arg1;
- (id)canvasToImageOffScreenWithScale:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setDrawActions:(id)arg1 reset:(_Bool)arg2;
- (id)getMethodData:(id)arg1 forMethod:(id)arg2;
- (id)getString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

