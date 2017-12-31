//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, WxaExternalInfo;

@interface WAPermissionUserAuthTask : NSObject <PBMessageObserverDelegate, UIAlertViewDelegate>
{
    unsigned int _debugModeType;
    WxaExternalInfo *_externalInfo;
    NSString *_appID;
    NSString *_jsapi;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _failHandler;
    unsigned long long _scene;
    NSString *_scope;
    NSString *_scopeDescription;
    _Bool _isAllowAuth;
    id <WAPermissionUserAuthTaskDelegate> _delegate;
}

@property(nonatomic) __weak id <WAPermissionUserAuthTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAuthAlert;
- (void)showAlert;
- (void)continueShowAlert;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onResponseSetAuth:(id)arg1;
- (void)requestSetAuth;
- (void)onResponseAuth:(id)arg1;
- (void)requestAuth;
- (void)authFailAndCompleteTaskWithMessage:(id)arg1;
- (void)taskComplete;
- (void)authFailWithMessage:(id)arg1;
- (void)authOK;
- (void)saveAuthInfoWithStatus:(unsigned long long)arg1;
- (void)saveAuthInfo:(id)arg1;
- (id)getAuthInfo;
- (void)runUserAuth;
- (void)setUserAuthDataWithAPPID:(id)arg1 jsapi:(id)arg2 handler:(CDUnknownBlockType)arg3 failHandler:(CDUnknownBlockType)arg4 scene:(unsigned long long)arg5;
- (id)getJsapi;
- (id)getAppID;
- (void)dealloc;
- (id)initWithDebugModeType:(unsigned int)arg1 externalInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

