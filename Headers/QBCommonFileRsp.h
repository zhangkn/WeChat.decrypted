//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QBJceObjectV2.h"

@class NSDictionary, NSString;

@interface QBCommonFileRsp : QBJceObjectV2
{
    NSDictionary *jcev2_p_0_o_mCommonFile__b0x9i_M09ONSStringVOQBCommonFileInfo;
    NSString *jcev2_p_1_o_sModuleName;
    NSString *jcev2_p_2_o_sContentMd5;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sContentMd5, setter=setSContentMd5:) NSString *jcev2_p_2_o_sContentMd5; // @synthesize jcev2_p_2_o_sContentMd5;
@property(retain, nonatomic, getter=sModuleName, setter=setSModuleName:) NSString *jcev2_p_1_o_sModuleName; // @synthesize jcev2_p_1_o_sModuleName;
@property(retain, nonatomic, getter=mCommonFile, setter=setMCommonFile:) NSDictionary *jcev2_p_0_o_mCommonFile__b0x9i_M09ONSStringVOQBCommonFileInfo; // @synthesize jcev2_p_0_o_mCommonFile__b0x9i_M09ONSStringVOQBCommonFileInfo;
- (void).cxx_destruct;
- (id)init;

@end

