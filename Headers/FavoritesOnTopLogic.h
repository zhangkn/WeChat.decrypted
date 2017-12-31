//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IFavoritesExt.h"
#import "MMService.h"

@class CMessageWrap, FavoritesItem, NSString, WNArticleViewController;

@interface FavoritesOnTopLogic : MMService <IFavoritesExt, MMService>
{
    _Bool _bEditable;
    FavoritesItem *_currentOnTopFavItem;
    CMessageWrap *_currentRecordMsg;
    WNArticleViewController *_currentVc;
}

@property(retain, nonatomic) WNArticleViewController *currentVc; // @synthesize currentVc=_currentVc;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable=_bEditable;
@property(retain, nonatomic) CMessageWrap *currentRecordMsg; // @synthesize currentRecordMsg=_currentRecordMsg;
@property(retain, nonatomic) FavoritesItem *currentOnTopFavItem; // @synthesize currentOnTopFavItem=_currentOnTopFavItem;
- (void).cxx_destruct;
- (void)OnDelFavoritesItem:(unsigned int)arg1;
- (void)OnUpdateItems:(id)arg1;
- (void)reLoadInfoFromStg;
- (void)reloadConversionBanner;
- (id)getBannerTitle;
- (id)getKeepHoldFavDetailVCForNewMainFrameBanner;
- (void)showConversionOnTop:(_Bool)arg1:(id)arg2:(id)arg3:(_Bool)arg4:(id)arg5;
- (_Bool)isEqualCurrentFavItem:(id)arg1:(id)arg2;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

