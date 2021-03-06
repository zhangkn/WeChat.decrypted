//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMWebSearchViewDelegate.h"

@class MMWebSearchController, NSDictionary, NSString, UIView, WCStatTimerHelper;

@interface WSNoSearchBarWebViewController : MMUIViewController <MMWebSearchViewDelegate>
{
    UIView *_navBarBkg;
    int _initScene;
    MMWebSearchController *_webSearchController;
    _Bool _hasInitContainerView;
    WCStatTimerHelper *_pageTimeHelper;
    NSDictionary *_initedUrlParams;
    unsigned long long _enterTime;
}

@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) NSDictionary *initedUrlParams; // @synthesize initedUrlParams=_initedUrlParams;
- (void).cxx_destruct;
- (void)onJsbridgeReady:(id)arg1;
- (double)webSearchViewPosY;
- (id)getTitleLabelWithTitle:(id)arg1;
- (void)initTitleView;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)initNavigationBar;
- (void)initView;
- (void)willDisappear;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)tryInitContainerView;
- (void)preInitContainerView;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)initWebSearchController;
- (id)initWithScene:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

