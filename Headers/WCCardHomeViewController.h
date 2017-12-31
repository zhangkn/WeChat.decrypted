//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "WCCardHomeBubbleHeaderViewDelegate.h"
#import "WCCardHomeHeaderViewDelegate.h"
#import "WCNewCardDetailViewControllerDelegate.h"

@class NSString, UICollectionView, WCCardCollectionViewFlowLayout, WCCardHomeLogicController;

@interface WCCardHomeViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, WCCardHomeHeaderViewDelegate, WCNewCardDetailViewControllerDelegate, WCCardHomeBubbleHeaderViewDelegate>
{
    UICollectionView *_collectionView;
    WCCardCollectionViewFlowLayout *_collectionLayout;
    WCCardHomeLogicController *_logicViewController;
    long long _from;
}

@property(nonatomic) long long from; // @synthesize from=_from;
@property(retain, nonatomic) WCCardHomeLogicController *logicViewController; // @synthesize logicViewController=_logicViewController;
@property(retain, nonatomic) WCCardCollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)delayFadeOutCard:(id)arg1;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onDeleteCard:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)reloadCollectionView;
- (void)confiNavigationBar;
- (void)confiView;
- (void)confiDataWithShareOnly:(_Bool)arg1;
- (void)onHomeBubbleHeaderViewBubbleClick;
- (void)jumbToMemberList;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 colorForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onShowAllMessage;
- (void)onBackDidSelected;
- (_Bool)useTransparentNavibar;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithFrom:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

