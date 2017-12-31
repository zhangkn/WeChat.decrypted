//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseControlLogic.h"

#import "BindPhoneSuccessViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "WCAccountBindPhoneSetPrivateViewControllerDelegate.h"
#import "WCAccountFillPhoneViewControllerDelegate.h"
#import "WCAccountPhoneVerifyViewControllerDelegate.h"
#import "WCAccountVoiceVerifyViewControllerDelegate.h"
#import "settingModifyAliasDelegate.h"

@class NSString, WCAccountControlData;

@interface WCAccountBindPhoneControlLogic : WCBaseControlLogic <WCAccountFillPhoneViewControllerDelegate, WCAccountVoiceVerifyViewControllerDelegate, WCAccountPhoneVerifyViewControllerDelegate, WCAccountBindPhoneSetPrivateViewControllerDelegate, settingModifyAliasDelegate, BindPhoneSuccessViewControllerDelegate, PBMessageObserverDelegate>
{
    _Bool m_bAgreementMobileCanBeFound;
    _Bool m_bAgreementPushFriendToMe;
    unsigned long long m_scene;
    NSString *m_nsOldPhone;
    WCAccountControlData *m_data;
    id <WCAccountBindPhoneControlLogicDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)onBindPhoneSuccess;
- (void)setAliasOKForNakedWxProtectAndTryLogout;
- (void)setAliasOKForNakedWxProtect;
- (void)updateLastLoginName;
- (_Bool)isFromNakedWxProtect;
- (_Bool)isFromVerify;
- (_Bool)isFromBind;
- (_Bool)isFromChange;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onSyncAddressBook;
- (void)bindPhoneReturn:(id)arg1;
- (_Bool)onHandleError:(id)arg1;
- (void)BindMobileAgain:(id)arg1;
- (void)onVoiceVerifyGetVerifyCode:(id)arg1;
- (void)onVoiceVerifyBack;
- (void)onPhoneVerifyNext:(id)arg1;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyVoice;
- (void)onPhoneVerifyBack;
- (void)onFillPhonePushFriendToMe:(_Bool)arg1;
- (void)onFillPhoneBindAgreeMobileCanBeFound:(_Bool)arg1;
- (void)onFillPhoneSetPrivateDone;
- (void)onFillPhoneCancelLogout;
- (void)onFillPhoneSetWxUserName;
- (void)onContinueFillPhone;
- (void)onFillPhoneNext:(id)arg1 phoneNumber:(id)arg2;
- (void)onFillPhoneBack;
- (void)onFillPhoneSetPrivate;
- (void)onAlertCancel;
- (_Bool)checkVerifyCode:(id)arg1;
- (_Bool)getVoideVerifyCodeReady:(id)arg1;
- (_Bool)getVerifyCodeReady;
- (unsigned int)getCheckOpcode;
- (unsigned int)getReadyOpcode;
- (id)getFullPhoneNum;
- (void)cancelAllEvent;
- (void)startLogic;
- (void)startlogic:(id)arg1;
- (void)startVerifylogic:(id)arg1;
- (void)startChangelogic:(id)arg1;
- (void)startLogicFromOnlySetWxIdProtect;
- (void)startLogicFromNakedWxProtect;
- (void)startlogicFromServerControl;
- (void)dealloc;
- (void)stopLogic;
- (void)setScene:(unsigned int)arg1;
- (id)getData;
- (id)initWithData:(id)arg1;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

