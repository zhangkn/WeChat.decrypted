//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMsgRevokeExt.h"
#import "MMImgageBrowseViewDelegate.h"
#import "MessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "WCActionSheetDelegate.h"

@class CMessageWrap, MMAnimationTipView, MMImageBrowseView, MMLoadingView, NSString, UIImage, WCActionSheet;

@interface MsgImageBrowseViewController : MMUIViewController <IMsgRevokeExt, MMImgageBrowseViewDelegate, WCActionSheetDelegate, UIAlertViewDelegate, MessageObserverDelegate, UIViewControllerAnimatedTransitioning>
{
    MMImageBrowseView *m_imageView;
    MMAnimationTipView *m_tipView;
    CMessageWrap *m_wrapMsg;
    UIImage *m_image;
    id <ImageBrowseDelegate> m_delegate;
    unsigned int m_uiEvent;
    MMLoadingView *m_loadingView;
    id m_singleTapGesture;
    id m_doubleTapGesture;
    _Bool m_saveMode;
    WCActionSheet *m_actionSheet;
    struct CGRect m_originRect;
}

@property(nonatomic) _Bool m_saveMode; // @synthesize m_saveMode;
@property(retain, nonatomic) id m_doubleTapGesture; // @synthesize m_doubleTapGesture;
@property(retain, nonatomic) id m_singleTapGesture; // @synthesize m_singleTapGesture;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
- (void).cxx_destruct;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)animateShowWithOriginRectInScreen:(struct CGRect)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLongPress;
- (void)onSingleTapImageBrowseView;
- (void)onSavedPhotosAlbum:(id)arg1;
- (void)onOperate:(id)arg1;
- (void)onDouTapOnNavigationBar:(id)arg1;
- (void)onSingleTapOnNavigationBar:(id)arg1;
- (void)stopImageLoading;
- (void)startImageLoading;
- (void)startDownloadImg;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)updateLoadingPercent:(unsigned int)arg1 PartLen:(unsigned int)arg2 DataLen:(unsigned int)arg3;
- (void)dealloc;
- (id)initWithMsgWrap:(id)arg1 originFrame:(struct CGRect)arg2;
- (void)didAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initData;
- (void)initLoadingView;
- (void)initImageView;
- (void)initNavigationBar;
- (id)genDataLength:(unsigned int)arg1;
- (void)UpdateImage;
- (void)UpdateHDImage:(long long)arg1;
- (void)GetImage;
- (void)exitFullScreen;
- (void)setFullScreen:(_Bool)arg1;
- (void)removeNvGestureRecognizer;
- (void)addNvGestureRecognizer;
- (void)handleViewWillDisappear;
- (void)handleViewWillAppear;
- (void)showStatusBar;
- (void)hideStatusBar;
- (void)adjustImageViewRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

