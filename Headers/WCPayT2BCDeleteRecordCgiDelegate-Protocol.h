//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DeleteRecordRes, NSString;

@protocol WCPayT2BCDeleteRecordCgiDelegate <NSObject>
- (void)OnWCPayT2BCDeleteRecordCgiResponseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCDeleteRecordCgiResponseOK:(DeleteRecordRes *)arg1;
@end

