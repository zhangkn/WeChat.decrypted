//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderMessageViewModel.h"

#import "RichTextLayoutDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MultiReaderMessageViewModel : ReaderMessageViewModel <RichTextLayoutDelegate>
{
    NSMutableArray *m_titleSizeArr;
    NSMutableDictionary *m_titleStyleDic;
    NSMutableArray *m_digestSizeArr;
    NSMutableDictionary *m_digestStyleDic;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (_Bool)isItemNoCover:(id)arg1;
- (struct CGSize)textSizeWithContent:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 maxNumOfLine:(unsigned long long)arg4 lineSpacing:(double)arg5;
- (struct CGSize)textSizeWithContent:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 maxNumOfLine:(unsigned long long)arg4;
- (struct CGSize)calculateDigestLabelSize:(unsigned int)arg1;
- (id)digestStylesForIndex:(unsigned int)arg1;
- (struct CGSize)digestSizeOfIndex:(unsigned int)arg1;
- (struct CGSize)calculateTitleLabelSize:(unsigned int)arg1;
- (id)titleStylesForIndex:(unsigned int)arg1;
- (struct CGSize)titleSizeOfIndex:(unsigned int)arg1;
- (void)resetTextSize;
- (id)itemLabelWithFont:(id)arg1 width:(double)arg2;
- (id)getRichTextView:(double)arg1 font:(id)arg2;
- (unsigned int)imageCountForIndex:(unsigned int)arg1;
- (unsigned int)playLengthForIndex:(unsigned int)arg1;
- (unsigned long long)musicSouceForIndex:(unsigned int)arg1;
- (id)genMusicInfoForIndex:(unsigned int)arg1;
- (double)textNormalItemViewHeight:(id)arg1 index:(unsigned int)arg2;
- (double)textTopItemViewHeight:(id)arg1;
- (double)videoTopItemViewHeight:(id)arg1;
- (double)voiceTopItemViewHeight:(id)arg1;
- (double)musicTopItemViewHeight:(id)arg1;
- (double)imageTopItemViewHeight:(id)arg1;
- (double)articleTopItemViewHeight:(id)arg1;
- (double)appendNodeViewHeightIfIndex:(long long)arg1;
- (double)messageNodeViewHeight;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
