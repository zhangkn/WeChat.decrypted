//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, UIBarButtonItem, UIDatePicker, UIToolbar, UIView;

@interface WXGActionSheetDatePicker : NSObject
{
    _Bool m_bShow;
    unsigned long long _tag;
    id <WXGActionSheetDatePickerDelegate> _delegate;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    NSDate *_selectedDate;
    UIView *_contentView;
    UIView *_transparentView;
    UIDatePicker *_datePicker;
    UIToolbar *_pickerToolBar;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_titleBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *titleBarButtonItem; // @synthesize titleBarButtonItem=_titleBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem=_doneBarButtonItem;
@property(retain, nonatomic) UIToolbar *pickerToolBar; // @synthesize pickerToolBar=_pickerToolBar;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(nonatomic) __weak id <WXGActionSheetDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (void)eventForDatePicker:(id)arg1;
- (void)actionPickerDone;
- (void)actionPickerCance;
- (id)createDatePickerInView:(id)arg1;
- (id)createToolBarInView:(id)arg1 withTitle:(id)arg2;
- (void)dismissActionSheetDatePicker;
- (void)showActionSheetDatePickerInView:(id)arg1 withTitle:(id)arg2;
- (id)init;

@end

