//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCDragToCloseViewController.h"

#import "EditImageInitialViewDelegate.h"
#import "EditVideoLogicItemDelegate.h"
#import "MMAssetPickerBrowserViewDelegate.h"
#import "MMAssetSelectedCollectionViewDelegate.h"
#import "MultiImageScrollViewDelegate.h"
#import "SightLocalVideoProcessingViewControllerDelegate.h"
#import "WCActionSheetDelegate.h"

@class EditImageIntialView, EditVideoLogicItem, MMAsset, MMAssetPickerSendButton, MMAssetSelectCheckButton, MMAssetSelectedCollectionView, MultiImageScrollView, NSMutableDictionary, NSString, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface MMImagePreviewBrowserController : WCDragToCloseViewController <EditVideoLogicItemDelegate, EditImageInitialViewDelegate, MMAssetPickerBrowserViewDelegate, MMAssetSelectedCollectionViewDelegate, SightLocalVideoProcessingViewControllerDelegate, MultiImageScrollViewDelegate, WCActionSheetDelegate>
{
    MultiImageScrollView *_pagingScrollView;
    UIView *oTitleBackGroundView;
    UIView *_bottomBar;
    UIButton *_originImageCheck;
    UILabel *_originImageLabel;
    UIActivityIndicatorView *_originIndictorView;
    UIButton *_editButton;
    MMAssetPickerSendButton *m_sendButton;
    MMAssetSelectedCollectionView *m_selectedCollectionView;
    MMAssetSelectCheckButton *m_selectCheckButton;
    NSMutableDictionary *m_browserViewCache;
    UILabel *m_tipInfoLabel;
    UIButton *m_cropVideoButton;
    UIButton *m_errorInfoBar;
    _Bool m_hasClickSendButton;
    unsigned int _startPageIndex;
    id <MMImagePickerControlCenter> controlCenter;
    id <MMImagePreviewBrowserControllerDelegate> m_delegate;
    EditImageIntialView *_editImageInitialView;
    EditVideoLogicItem *editVideoLogicItem;
    id <MMImagePreviewBrowserControllerDataSource> _m_dataSource;
    MMAsset *__editAsset;
}

@property(nonatomic) unsigned int startPageIndex; // @synthesize startPageIndex=_startPageIndex;
@property(copy, nonatomic) MMAsset *_editAsset; // @synthesize _editAsset=__editAsset;
@property(nonatomic) __weak id <MMImagePreviewBrowserControllerDataSource> m_dataSource; // @synthesize m_dataSource=_m_dataSource;
@property(retain, nonatomic) EditVideoLogicItem *editVideoLogicItem; // @synthesize editVideoLogicItem;
@property(retain, nonatomic) EditImageIntialView *_editImageInitialView; // @synthesize _editImageInitialView;
@property(nonatomic) _Bool m_hasClickSendButton; // @synthesize m_hasClickSendButton;
@property(nonatomic) __weak id <MMImagePreviewBrowserControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter;
- (void).cxx_destruct;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)sightLocalVideoProcessingViewController:(id)arg1 didFinishEditingWithSightDraft:(id)arg2;
- (void)onAssetSelectedCollectionViewMoveAssetInfo:(id)arg1 oldIndex:(unsigned long long)arg2;
- (void)onAssetSelectedCollectionViewClickAtIndex:(unsigned long long)arg1;
- (void)onAssetBrowserViewPlayingStateChanged:(id)arg1 isPlaying:(_Bool)arg2;
- (void)onAssetBrowserViewSingleTap:(id)arg1;
- (void)onAssetBrowserViewLoadFinished:(id)arg1;
- (void)onChangePage;
- (void)multiImageScrollViewWillBeginDragging;
- (void)hideVCAnimation;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onSingleTap:(id)arg1;
- (id)imageAtPage:(unsigned int)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)changeToPageWithAssetInfo:(id)arg1;
- (void)updateBottomBarWithAssetInfo:(id)arg1 stateInfo:(id)arg2;
- (void)updateOriginSizeLabel;
- (void)updateSelectedButtonWithAssetInfo:(id)arg1;
- (void)updateSelectCheckButtonWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)updateEditButtonEnableWithAssetInfo:(id)arg1;
- (void)setBottomAndTopBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)OnSelectedButtonDone;
- (void)onOriginImageCheck:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)sendSelectedImage;
- (void)prepareSend;
- (void)stopLoadingAfterSent;
- (void)OnCancel:(id)arg1;
- (void)OnCrop:(id)arg1;
- (void)onEditVideo:(id)arg1;
- (void)onEditImage:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)OnClickDoneBarButton;
- (void)OnClickBackBarButton:(id)arg1;
- (void)showErrorInfoBarWithInfo:(id)arg1;
- (void)initBackgroundView;
- (void)initDoneBarbutton;
- (void)initBackBarButton;
- (void)initSelectCheckButton;
- (void)initOriginImageButton;
- (void)initBottomBar;
- (id)init;
- (void)onClickEditVideoDoneBarButton;
- (void)onClickEditVideoBackBarButton;
- (void)onEditDoneInTimelineAlbum;
- (void)onEditDoneInChatAlbum;
- (void)onEditFinish;
- (void)setBottomAndTopBarHiddenWithAnimation:(_Bool)arg1;
- (void)onEditVideo:(int)arg1 withEditEntrance:(unsigned long long)arg2;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)setBottomAndTopBarHiddenWithAnimation:(_Bool)arg1;
- (void)getOriginalImage:(CDUnknownBlockType)arg1;
- (void)getDisplayImage:(CDUnknownBlockType)arg1;
- (void)onEditImage:(int)arg1 withEditEntrance:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

