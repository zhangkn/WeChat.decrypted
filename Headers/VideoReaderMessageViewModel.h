//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderMessageViewModel.h"

@class NSString;

@interface VideoReaderMessageViewModel : ReaderMessageViewModel
{
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (struct CGSize)calculateTitleViewSize;
@property(readonly, nonatomic) NSString *timeText;
- (double)messageNodeViewHeight;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

