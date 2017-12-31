//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "ZoomingScrollViewDelegate.h"

@class NSString, UIImage, UIView, UIWindow, ZoomingScrollView;

@interface SingleImageBrowser : MMUIViewController <UIScrollViewDelegate, ZoomingScrollViewDelegate, WCActionSheetDelegate>
{
    UIImage *_image;
    ZoomingScrollView *_pagingScrollView;
    UIView *_senderViewForAnimation;
    struct CGRect _senderViewOriginalFrame;
    UIWindow *_applicationWindow;
    CDUnknownBlockType _onForwardMsg;
    CDUnknownBlockType _onSaveToAlbum;
    CDUnknownBlockType _onAddToFavorites;
}

@property(copy, nonatomic) CDUnknownBlockType onAddToFavorites; // @synthesize onAddToFavorites=_onAddToFavorites;
@property(copy, nonatomic) CDUnknownBlockType onSaveToAlbum; // @synthesize onSaveToAlbum=_onSaveToAlbum;
@property(copy, nonatomic) CDUnknownBlockType onForwardMsg; // @synthesize onForwardMsg=_onForwardMsg;
- (void).cxx_destruct;
- (void)addToFavorites;
- (void)forwardMessage;
- (void)saveImageToAlbum;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLongPress:(id)arg1;
- (void)animateView:(id)arg1 toFrame:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onZoomingScrollViewSingleTap;
- (void)dismissPhotoBrowserAnimated:(_Bool)arg1;
- (void)performCloseAnimation;
- (void)viewDidLoad;
- (struct CGSize)contentSizeForPagingScrollView;
- (void)performPresentAnimation;
- (id)initWithImage:(id)arg1 animatedFromView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

