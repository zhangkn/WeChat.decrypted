//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMActionSheetDatePickerDelegate.h"
#import "PBMessageObserverDelegate.h"

@class MMActionSheetDatePicker, NSString, WCScheduleItem;

@interface WCScheduleLogicController : MMObject <PBMessageObserverDelegate, MMActionSheetDatePickerDelegate>
{
    id <WCScheduleLogicControllerDelegate> _delegate;
    MMActionSheetDatePicker *_datePicker;
    WCScheduleItem *_cachedItem;
}

@property(retain, nonatomic) WCScheduleItem *cachedItem; // @synthesize cachedItem=_cachedItem;
@property(retain, nonatomic) MMActionSheetDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) __weak id <WCScheduleLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)datePickerConfirm:(id)arg1;
- (void)datePickerCancel:(id)arg1;
- (_Bool)startLogicWithItem:(id)arg1;
- (_Bool)startLogicWithItem:(id)arg1 selectedDate:(id)arg2;
- (void)dismissDatePickerView;
- (_Bool)startLogicWithItem:(id)arg1 showDatePickerInView:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

