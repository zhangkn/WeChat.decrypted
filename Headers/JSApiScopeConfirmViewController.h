//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class JSAPIScopeConfirmContainterView, JSApiScopeConfirmWindow;

@interface JSApiScopeConfirmViewController : MMUIViewController
{
    JSAPIScopeConfirmContainterView *_containerView;
    JSApiScopeConfirmWindow *_weakConfirmWindow;
}

@property(nonatomic) __weak JSApiScopeConfirmWindow *weakConfirmWindow; // @synthesize weakConfirmWindow=_weakConfirmWindow;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)onTopBarFrameChanged;
- (_Bool)useBlackStatusbar;
- (void)viewDidLoad;
- (id)initWithWindow:(id)arg1;

@end

