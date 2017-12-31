//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMWebViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "WCBaseControlMgrExt.h"
#import "WCPayAddPayCardDelegate.h"
#import "WCPayGPWalletLaunchControlLogicDelegate.h"
#import "WCPayOfflineGetMsgCgiDelegate.h"
#import "WCPayOfflinePayConfirmViewDelegate.h"
#import "WCPayOfflinePayViewControllerDelegate.h"
#import "WCPayOpenECardControlLogicExt.h"
#import "WCPayOrderDetailHistoryViewControllerDelegate.h"
#import "WCPayPaidOrderDetailViewControllerDelegate.h"
#import "WCPayT2BCTransferControlLogicDelegate.h"

@class NSMutableArray, NSString, WCPayOfflineGetMsgCgi, WCPayOfflinePayConfirmView, WCPayPayMoneyLogic, WCPayRealnameGuideInfo;

@interface WCPayOfflinePayMainLogic : WCPayControlLogic <UIViewControllerTransitioningDelegate, MMWebViewDelegate, WCPayAddPayCardDelegate, WCPayGPWalletLaunchControlLogicDelegate, WCPayOpenECardControlLogicExt, WCPayT2BCTransferControlLogicDelegate, WCPayOfflinePayViewControllerDelegate, WCPayOrderDetailHistoryViewControllerDelegate, WCBaseControlMgrExt, WCPayOfflinePayConfirmViewDelegate, WCPayPaidOrderDetailViewControllerDelegate, WCPayOfflineGetMsgCgiDelegate>
{
    int m_uiLocationTag;
    NSMutableArray *m_arrConfirmedOfflinePayID;
    WCPayOfflinePayConfirmView *confirmView;
    WCPayRealnameGuideInfo *m_realNameInfo;
    _Bool _isPullingOfflineMsg;
    _Bool _isOfflineGetMsgStarted;
    id <WCPayOfflineLogicDelegate> _logicDelegate;
    WCPayPayMoneyLogic *_payMoneyLogic;
    WCPayOfflineGetMsgCgi *_offlineGetMsgCgi;
}

@property(nonatomic) _Bool isOfflineGetMsgStarted; // @synthesize isOfflineGetMsgStarted=_isOfflineGetMsgStarted;
@property(nonatomic) _Bool isPullingOfflineMsg; // @synthesize isPullingOfflineMsg=_isPullingOfflineMsg;
@property(retain, nonatomic) WCPayOfflineGetMsgCgi *offlineGetMsgCgi; // @synthesize offlineGetMsgCgi=_offlineGetMsgCgi;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(nonatomic) __weak id <WCPayOfflineLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void).cxx_destruct;
- (void)OnWCPayT2BCTransferControlLogicFinish;
- (void)wcpayOfflineGetMsgCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)wcpayOfflineGetMsgCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onGroupPayWalletLaunchFinish;
- (_Bool)gotoViewController:(id)arg1;
- (void)startPayMoneyLogic:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)reportReceiveSuccessData:(id)arg1;
- (id)OnWCPayPaidOrderDetailViewControllerRequestGuideInfo;
- (void)OnWCPayPaidOrderDetailViewControllerClearGuideInfo;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)arg1;
- (void)OnEnterForeground;
- (void)OnNotifyOfflinePayUserPaying:(id)arg1;
- (void)OnNotifyOfflinePayConfirmWithReqkey:(id)arg1;
- (void)OnNotifyOfflinePayConfirm:(id)arg1 ReqKey:(id)arg2;
- (void)OnNotifyOfflinePaySuccess:(id)arg1 RealNameInfo:(id)arg2 ReqKey:(id)arg3 Error:(id)arg4;
- (void)OnNotifyResutltOfOfflinePay:(id)arg1 Error:(id)arg2;
- (void)onNotifyOfflinePayRealNameGuide:(id)arg1;
- (void)onNotifyOfflinePayRealNameBlock:(id)arg1 Error:(id)arg2;
- (void)OnNotifyFreezeOfflinePay:(id)arg1 Error:(id)arg2;
- (void)openECardLogicDidSuccess:(id)arg1;
- (void)OnShouldChangePayCardError:(id)arg1 ErrorMsg:(id)arg2 ErrorType:(unsigned int)arg3;
- (void)OnAddCardError:(id)arg1 ErrorMsg:(id)arg2 ErrorType:(unsigned int)arg3;
- (void)OnLimitInsufficientError:(id)arg1 ErrorMsg:(id)arg2 ErrorType:(unsigned int)arg3;
- (void)OnConfirmOfflinePayResponse:(id)arg1 transID:(id)arg2 Error:(id)arg3;
- (id)genRealNameGuideInfoFromDic:(id)arg1;
- (void)OnGetHistoryOrderDetailInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetLocalPayCardList:(id)arg1 UsrVerifiedInfo:(id)arg2 SwicthInfo:(id)arg3 BalanceInfo:(id)arg4 NoticeInfo:(id)arg5 loanEntryInfo:(id)arg6 LqtInfo:(id)arg7;
- (void)OnQueryOfflinePayLimit:(id)arg1 fromCache:(_Bool)arg2 Error:(id)arg3;
- (void)OnOfflinePayCerticationOuttimeError:(id)arg1;
- (void)OnQueryOfflinePayInfo:(id)arg1 LocalCached:(_Bool)arg2 Error:(id)arg3;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(int)arg2;
- (void)onAddPayCardResult:(_Bool)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)PayPwdBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)onOfflinePayConfirmViewCancel:(id)arg1;
- (void)onOfflinePayConfirmViewPay:(id)arg1 passwd:(id)arg2;
- (void)OnClickedBrandAppUserName:(id)arg1 NickName:(id)arg2;
- (void)OnHistoryOrderDetailRightActionBack:(_Bool)arg1;
- (void)OnHistoryOrderDetailBack:(_Bool)arg1;
- (void)qrcodeRewardClickLogic;
- (void)onWCPayOfflinePayViewControllerClickQRCodeRewardBtn;
- (void)onOfflinePayPatternLockBlockErrorOutOfLimit;
- (void)OnContinueClickTransToBank;
- (void)OnWCPayOfflinePayViewControllerClickTransToBankCardBtn;
- (void)insideCallReportCurrentOfflinePayMsgFromPull;
- (void)insideCallOfflineGetMsg;
- (void)StopOfflineGetMsg;
- (void)StartOfflineGetMsg;
- (void)OnWCPayOfflinePayNoCodeTipsViewEnableRefreshBtnAfterClick;
- (void)OnWCPayOfflinePayNoCodeTipsViewClickRefreshBtn;
- (void)onWCpayOfflinePayViewControllerClickF2fHongBaoBtn;
- (void)onWCPayOfflinePayViewControllerClickGroupPayBtn;
- (void)stopOfflinePayLogicWithoutAnimation;
- (void)ReceiveClickLogic;
- (void)OnWCpayOfflinePayViewControllerClickReceiveMoneyBtn;
- (void)OnWCPayOfflinePayViewControllerAddNewCardBtnPress;
- (void)OnWCPayOfflinePayViewControllerSnapShotAlertGotoDetail;
- (void)OnWCPayOfflinePayViewControllerCloseAction;
- (void)OnWCPayOfflinePayViewControllerUnfreezeBtnDown;
- (void)OnWCPayOfflinePayViewControllerQuickChangeOfflinePayLimit;
- (void)OnWCPayOfflinePayViewControllerChangeOfflinePayLimit;
- (void)OnWCPayOfflinePayViewControllerCreateOfflinePay;
- (void)OnWCPayOfflinePayViewControllerBack;
- (void)tryExitCodeViewFullScreen;
- (void)OnReCreateOfflinePay;
- (void)OnCancelReCreateOfflinePay;
- (void)OnAddCardBtnDonw:(id)arg1;
- (void)OnChangedLimitBtnDonw:(id)arg1;
- (void)OnOfflinePayCancelPosNotification:(id)arg1;
- (void)clearVibration;
- (void)playVibration;
- (void)stopLogic;
- (void)startLogic;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
