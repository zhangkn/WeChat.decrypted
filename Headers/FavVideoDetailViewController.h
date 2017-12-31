//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavForwardLogicDelegate.h"
#import "IFavoritesExt.h"
#import "INetworkStatusMgrExt.h"
#import "MMWebViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class FavDataItemWrap, FavForwardLogicController, FavoritesItem, FavoritesItemDataField, MMProgressView, MMWebViewController, NSString, UIButton, UIDocumentInteractionController, UIImageView, UILabel, UIView;

@interface FavVideoDetailViewController : MMUIViewController <UIAlertViewDelegate, INetworkStatusMgrExt, IFavoritesExt, MMWebViewDelegate, FavForwardLogicDelegate, WCActionSheetDelegate>
{
    FavoritesItem *m_favItem;
    FavDataItemWrap *m_favDataWrap;
    FavoritesItemDataField *m_favData;
    UIImageView *m_imageView;
    MMProgressView *m_progressBar;
    UILabel *m_labProgress;
    UIButton *m_btnVideoOpen;
    UIButton *m_btnOpenByApp;
    UIView *m_syncView;
    UILabel *m_labelSyncTip;
    UIButton *m_labelSync;
    UIDocumentInteractionController *m_vcDocument;
    int syncStautus;
    _Bool bFromRecord;
    _Bool m_bIsUnkownType;
    _Bool m_bIsFileExit;
    NSString *m_nsVideoPath;
    NSString *m_nsSteamUrl;
    unsigned int m_uiVideoSize;
    MMWebViewController *m_webViewController;
    UIView *m_loadingView;
    FavForwardLogicController *m_favForwardController;
    id <FavVideoDetailDelegate> m_delegate;
}

@property(nonatomic) __weak id <FavVideoDetailDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (id)getFavForawrdViewController;
- (void)updateRightBtn;
- (void)onFavTagEditBegin:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAction:(id)arg1;
- (void)onWebViewDidRotateFromInterfaceOrientation:(long long)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)OnAddFavoritesItem:(id)arg1 ErrCode:(int)arg2;
- (void)OnUploadFavoritesItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)OnDownloadFavoritesItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)SetProgress:(double)arg1 TotalSize:(double)arg2;
- (void)StopSync;
- (void)StartSync;
- (void)OpenByApp;
- (void)OpenVideo;
- (void)showVideoExpire;
- (void)showSyncComplete;
- (void)showDownloading;
- (void)showUploading;
- (void)showNeedDownload;
- (void)showNeedUpload;
- (void)updateBtns;
- (void)updateStatus;
- (void)initView;
- (void)updateData;
- (void)viewDidLoad;
- (void)SafeDeleteDocument;
- (void)dealloc;
- (id)initWithFavDataWrap:(id)arg1;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

