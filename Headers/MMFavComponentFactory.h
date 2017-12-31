//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMFavComponentFactory : NSObject
{
}

+ (id)getFavNoteTitle:(id)arg1;
+ (id)getDataThumbPath:(id)arg1 largeImage:(_Bool)arg2;
+ (id)convertVoiceDurationToStrInDigits:(int)arg1;
+ (id)convertVoiceDurationToStr:(unsigned int)arg1;
+ (int)dataEnumToItemEnum:(int)arg1;
+ (double)heightForItemDataField:(id)arg1 inItem:(id)arg2;
+ (double)heightForCardItemDataField:(id)arg1 inItem:(id)arg2;
+ (id)createCardComponentByItemDataFieldWithSearchStyle:(id)arg1 inItem:(id)arg2;
+ (id)createCardComponentByItemDataField:(id)arg1 inItem:(id)arg2;
+ (id)createComponentByItemDataField:(id)arg1 inItem:(id)arg2;
+ (id)getRecordUrlDataForItem:(id)arg1 hasThumb:(_Bool)arg2;
+ (void)configRecordComData:(id)arg1 withFavItem:(id)arg2;
+ (void)configCardRecordComData:(id)arg1 withFavItem:(id)arg2;
+ (void)configNoteComData:(id)arg1 withFavItem:(id)arg2;
+ (void)configCardNoteComData:(id)arg1 withFavItem:(id)arg2;
+ (void)getFavNoteCellTitleAndDesc:(id)arg1 outTitle:(id *)arg2 outDesc:(id *)arg3;
+ (id)getFavTextCellText:(id)arg1;
+ (void)configComData:(id)arg1 withFavItem:(id)arg2;
+ (id)getDomain:(id)arg1;
+ (id)getUrlFrom:(id)arg1;
+ (double)heightForFavItem:(id)arg1 andIsEdit:(_Bool)arg2;
+ (double)heightForCardFavItem:(id)arg1 andIsEdit:(_Bool)arg2;
+ (double)heightForCardNewNoteItem;
+ (id)createCardNewNoteComponent;
+ (id)createComponentByFavItem:(id)arg1 showDataSize:(_Bool)arg2 hideLine:(_Bool)arg3 useCardStyle:(_Bool)arg4 withSearchStyle:(_Bool)arg5;
+ (id)createComponentByFavItem:(id)arg1 showDataSize:(_Bool)arg2 hideLine:(_Bool)arg3 useCardStyle:(_Bool)arg4;
+ (id)createComponentByFavItem:(id)arg1 showDataSize:(_Bool)arg2 hideLine:(_Bool)arg3;
+ (id)createCardComponentByFavItem:(id)arg1 showDataSize:(_Bool)arg2;
+ (id)createComponentByFavItem:(id)arg1 showDataSize:(_Bool)arg2;
+ (id)createCardComponentByFavItemWithSearchStyle:(id)arg1;
+ (id)createCardComponentByFavItem:(id)arg1;
+ (id)createComponentByFavItem:(id)arg1;

@end

