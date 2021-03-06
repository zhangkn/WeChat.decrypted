//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "WCPayBindedCardPikerItemDelegate.h"
#import "WCPayOrderDetailViewDelegate.h"

@class NSIndexPath, NSString, UIButton, WCBaseKeyboardToolBar, WCPayBindedCardPikerItem, WCPayTenpayPasswordCtrlItem;

@interface WCPayOrderDetailViewController : WCPayBaseViewController <WCPayBindedCardPikerItemDelegate, WCPayOrderDetailViewDelegate, ILinkEventExt>
{
    UIButton *m_footerButton;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCPayTenpayPasswordCtrlItem *m_textFieldItemPwd;
    WCPayBindedCardPikerItem *m_cardTypeItem;
    id <WCPayOrderDetailViewControllerDelegate> m_delegate;
    NSString *m_nsError;
    NSIndexPath *m_selectItemIndex;
    _Bool bSelectedBalance;
    _Bool bUserSelected;
}

- (void).cxx_destruct;
- (void)callDelegatePay;
- (double)calBalanceCellHeightWithForbidWord;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)clearPwdInput;
- (void)OnWCPayOrderDetailViewClickedCoupous;
- (void)OnWCPayOrderDetailViewHeightChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)OnSelectedNewCard;
- (void)OnSelectedBalance;
- (void)OnChooseCard:(id)arg1;
- (void)OnChooseNewCard:(id)arg1;
- (void)onNext;
- (void)OnAddCardToSharedFavInfo;
- (void)OnAddPayCard;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)makeNewCardInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeBalanceInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isNoCardOrBalanceDisable;
- (_Bool)isNeedAutoNext;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)initNavigationBar;
- (void)OnCancel;
- (void)OnComfireEnsureAlert;
- (void)reloadPayTableView;
- (void)reloadBindTableView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

