//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportJSApiActionItem : WAReportBaseItem
{
    int _result;
    int _permissionValue;
    int _errorcode;
    NSString *_funcName;
    NSString *_keyParam;
    unsigned long long _costtime;
    NSString *_errMsg;
}

@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) unsigned long long costtime; // @synthesize costtime=_costtime;
@property(nonatomic) int errorcode; // @synthesize errorcode=_errorcode;
@property(nonatomic) int permissionValue; // @synthesize permissionValue=_permissionValue;
@property(nonatomic) int result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *keyParam; // @synthesize keyParam=_keyParam;
@property(retain, nonatomic) NSString *funcName; // @synthesize funcName=_funcName;
- (void).cxx_destruct;
- (_Bool)isKeyJSApi;
- (id)reportString;

@end

