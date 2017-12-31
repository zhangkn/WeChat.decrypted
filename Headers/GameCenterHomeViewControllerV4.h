//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMGameUIViewController.h"

#import "GameCenterBottomViewDelegate.h"
#import "GameCenterHeaderActionDelegate.h"
#import "GameCenterMyGameViewDelegate.h"
#import "GameCenterNavCategoryViewDelegate.h"
#import "GameCenterRankedGameInfoCellDelegate.h"
#import "GameCenterRecentGamesCellDelegate.h"
#import "GameCenterRecommendViewDelegate.h"
#import "GameCenterUserActionCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GameCenterBottomView, GameCenterHeaderView, GameCenterHomeLogicControllerV4, MMLoadingView, MMTableView, NSMutableSet, NSString;

@interface GameCenterHomeViewControllerV4 : MMGameUIViewController <GameCenterMyGameViewDelegate, GameCenterUserActionCellDelegate, GameCenterBottomViewDelegate, UITableViewDelegate, UITableViewDataSource, GameCenterHeaderActionDelegate, GameCenterRecentGamesCellDelegate, GameCenterNavCategoryViewDelegate, GameCenterRecommendViewDelegate, GameCenterRankedGameInfoCellDelegate>
{
    MMLoadingView *_loadingView;
    MMTableView *_tableView;
    _Bool _bNeedReloadWhenAppear;
    GameCenterHomeLogicControllerV4 *_logicController;
    GameCenterHeaderView *_headerView;
    GameCenterBottomView *_bottomView;
    double _preContentOffsetY;
    _Bool _bHasH5FloatLayer;
    _Bool _retFromCgi;
    _Bool _myGameAllModuleReported;
    _Bool _profileExposureReported;
    int _entryNotifyType;
    int _sourceScene;
    NSMutableSet *_reportedIndexSet;
}

@property(retain, nonatomic) NSMutableSet *reportedIndexSet; // @synthesize reportedIndexSet=_reportedIndexSet;
@property(nonatomic) _Bool profileExposureReported; // @synthesize profileExposureReported=_profileExposureReported;
@property(nonatomic) _Bool myGameAllModuleReported; // @synthesize myGameAllModuleReported=_myGameAllModuleReported;
@property(nonatomic) _Bool retFromCgi; // @synthesize retFromCgi=_retFromCgi;
@property(nonatomic) _Bool bHasH5FloatLayer; // @synthesize bHasH5FloatLayer=_bHasH5FloatLayer;
@property(nonatomic) int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(nonatomic) int entryNotifyType; // @synthesize entryNotifyType=_entryNotifyType;
- (void).cxx_destruct;
- (_Bool)needKvReportOnce:(long long)arg1 row:(long long)arg2;
- (void)exposureKvReport:(unsigned int)arg1 AppId:(id)arg2 ExtInfo:(id)arg3;
- (void)gameCategoryExposureKvReport:(int)arg1 ExtInfo:(id)arg2;
- (void)recommendExposureKvReport:(unsigned int)arg1 ExtInfo:(id)arg2;
- (void)profileExposureKvReport;
- (void)promotedGameExposureKvReport:(id)arg1 Index:(long long)arg2;
- (void)myGameExposureKvReport:(id)arg1;
- (void)topBannerClicked:(id)arg1 ExternInfo:(id)arg2;
- (void)onSearchClicked:(id)arg1;
- (void)onGiftClicked:(id)arg1;
- (void)onMsgCenterClicked:(id)arg1;
- (void)onProfileClicked:(id)arg1;
- (void)onNavCategoryItemClicked:(id)arg1 ItemIndex:(int)arg2;
- (void)onRecommendLowerItemClick:(id)arg1 IsLeft:(_Bool)arg2;
- (void)onRecommendUpperBannerClick:(id)arg1;
- (void)onMyGameTplClick:(id)arg1 JumpUrl:(id)arg2 AppId:(id)arg3;
- (void)onMyGame:(id)arg1 gameRowClick:(id)arg2 Index:(long long)arg3 ShouldUseHvAppInfo:(_Bool)arg4;
- (void)onMyGame:(id)arg1 downloadGameClick:(id)arg2 ShouldUseHvAppInfo:(_Bool)arg3;
- (void)checkDBAutoRecover;
- (void)onOpenSearchWebResultItem:(id)arg1;
- (void)onOpenSearchGameRecommendResultItem:(id)arg1;
- (void)onOpenSearchGameResultItem:(id)arg1 sourceScene:(int)arg2;
- (void)searchBarDidEndSearch;
- (void)searchBarBecomeFirstResponder;
- (void)onInstalledMoreIconClicked:(id)arg1;
- (void)onRecentGameIconClicked:(id)arg1;
- (void)rankedGameInfoCellDownloadButtonClicked:(id)arg1;
- (void)onFeedBackButtonClicked;
- (void)bubbleButtonClicked;
- (int)openGameListView;
- (void)showWebViewWithUrl:(id)arg1 EntryScene:(id)arg2;
- (int)openGameDetailViewWithGameInfo:(id)arg1 sourceScene:(int)arg2;
- (id)makeBubbleCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makeMyActionCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makeGameCatergoryCell:(id)arg1 identifier:(id)arg2 section:(long long)arg3 index:(long long)arg4;
- (id)makeRecommendCell:(id)arg1 identifier:(id)arg2 section:(long long)arg3 index:(long long)arg4;
- (id)makeRecentMoreCell:(id)arg1 identifier:(id)arg2;
- (id)makeInstalledCellWithReusableCell:(id)arg1 identifier:(id)arg2 index:(long long)arg3;
- (id)makeMyRecentGameCellWithReusableCell:(id)arg1 identifier:(id)arg2 section:(long long)arg3 index:(long long)arg4;
- (id)makeMoreGamesCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makePromotedGameCellWithReusableCell:(id)arg1 identifier:(id)arg2 section:(long long)arg3 index:(long long)arg4;
- (void)viewDidTransitionToNewSize;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)initTableView;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)showSettingView;
- (void)initRightBarBtns;
- (void)initBottomView;
- (void)refreshBottomView;
- (void)initHeaderView;
- (void)refreshHeaderView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithSourceScene:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

