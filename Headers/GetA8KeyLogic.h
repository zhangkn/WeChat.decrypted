//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ExtraDeviceLoginMgrExt.h"
#import "IJumpEmoticonDetailCgiDelegate.h"
#import "IScanBookMgrExt.h"
#import "IWCDeviceBrandMgrExt.h"
#import "IWCProductExt.h"
#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCBaseControlMgrExt.h"
#import "WCNewCardDetailViewControllerDelegate.h"
#import "WCPayLogicMgrExt.h"
#import "WCProductDetailViewControllerDelegate.h"

@class CContact, DeepLinkBitSet, GeneralControlBitSet, JSAPIPermissionBitSet, JumpEmoticonDetailCgi, NSData, NSDictionary, NSMutableDictionary, NSString, SKBuiltinBuffer_t, UIViewController;

@interface GetA8KeyLogic : MMObject <WCPayLogicMgrExt, IJumpEmoticonDetailCgiDelegate, ExtraDeviceLoginMgrExt, IScanBookMgrExt, WCNewCardDetailViewControllerDelegate, PBMessageObserverDelegate, UIAlertViewDelegate, IWCProductExt, WCProductDetailViewControllerDelegate, IWCDeviceBrandMgrExt, WCBaseControlMgrExt>
{
    UIViewController *m_viewController;
    id <GetA8KeyLogicDelegate> m_delegate;
    NSString *m_nsLastResult;
    _Bool m_isSearching;
    NSString *m_nsBundleID;
    JSAPIPermissionBitSet *m_lastPmsBitSet;
    GeneralControlBitSet *m_lastGenCtlBitSet;
    DeepLinkBitSet *m_lastDeepLinkBitSet;
    NSData *m_lastJsApiControlBytes;
    NSMutableDictionary *m_wifiData;
    unsigned int _lastRequestID;
    SKBuiltinBuffer_t *_lastA8KeyCookie;
    CContact *m_deviceContact;
    NSDictionary *m_deviceData;
    double startTime;
    unsigned int _getA8keySubScene;
    unsigned int _getA8KeyScene;
    JumpEmoticonDetailCgi *m_jumpEmoticonDetailCgi;
    NSString *_m_sessionKey;
}

@property(nonatomic) unsigned int getA8KeyScene; // @synthesize getA8KeyScene=_getA8KeyScene;
@property(nonatomic) unsigned int getA8keySubScene; // @synthesize getA8keySubScene=_getA8keySubScene;
@property(copy, nonatomic) NSString *m_sessionKey; // @synthesize m_sessionKey=_m_sessionKey;
@property(nonatomic) __weak id <GetA8KeyLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) JumpEmoticonDetailCgi *m_jumpEmoticonDetailCgi; // @synthesize m_jumpEmoticonDetailCgi;
@property(nonatomic) _Bool m_isSearching; // @synthesize m_isSearching;
- (void).cxx_destruct;
- (void)OnGetRemoteProductItem:(id)arg1 QRCodeUrl:(id)arg2 Error:(int)arg3;
- (void)onNeedReStartScanQRCode;
- (void)onJumpEmoticonDetailCgiFailed:(id)arg1;
- (void)onJumpEmoticonDetailCgiOkWithPackageId:(id)arg1;
- (void)jumpToDeviceSearchGuideViewControllerWithUserData:(id)arg1;
- (void)jumpToMyDeviceInfoViewController:(id)arg1 userData:(id)arg2;
- (void)jumpToContactInfoViewController:(id)arg1 userData:(id)arg2;
- (void)onWCDeviceBrandSearch:(id)arg1 respData:(id)arg2 fliterStatus:(unsigned int)arg3;
- (void)onWCProductDetailViewControllerDisappear;
- (void)onGotProductDetailFail:(id)arg1;
- (void)onGotProductDetailSuccess:(id)arg1 productID:(id)arg2 retCode:(int)arg3;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSearchContactResp:(id)arg1;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (void)OnGetA8Key:(id)arg1;
- (void)showContactInfoView:(id)arg1 QRCodeScene:(int)arg2 alertWording:(id)arg3;
- (void)doSearchContact:(id)arg1 FromScene:(unsigned int)arg2 SearchScene:(unsigned int)arg3 resultString:(id)arg4 subScene:(unsigned int)arg5 picUrl:(id)arg6 picEncKey:(id)arg7 sourceType:(unsigned int)arg8;
- (void)doSearchContact:(id)arg1 FromScene:(unsigned int)arg2 SearchScene:(unsigned int)arg3 picUrl:(id)arg4;
- (void)doSearchContact:(id)arg1 SearchScene:(unsigned int)arg2 picUrl:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doUnknow:(id)arg1;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2 codeType:(unsigned int)arg3 codeVersion:(unsigned int)arg4 appId:(id)arg5;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2 subScene:(unsigned int)arg3 codeType:(unsigned int)arg4 codeVersion:(unsigned int)arg5;
- (void)setGetA8KeyBundleID:(id)arg1;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

