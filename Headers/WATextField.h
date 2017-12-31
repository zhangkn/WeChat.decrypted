//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

#import "UITextFieldDelegate.h"
#import "WADropListViewDelegate.h"
#import "WATextInputInterface.h"

@class NSString, UIColor, UIFont, WADropListView;

@interface WATextField : UITextField <UITextFieldDelegate, WADropListViewDelegate, WATextInputInterface>
{
    UIColor *_placeColor;
    UIFont *_placeFont;
    WADropListView *_dropView;
    _Bool _bAboveDrop;
    _Bool _disableEditing;
    _Bool showConfirmButton;
    _Bool multiLine;
    _Bool initKeyBoard;
    _Bool fixed;
    _Bool confirmHold;
    _Bool _screenWidth;
    unsigned int inputId;
    id <WATextInputDelegate> keyboardDelegate;
    NSString *userData;
    long long maxLength;
    NSString *defaultValue;
    double bottomMargin;
    long long initCursor;
    long long endCursor;
    long long selectionBegin;
    long long selectionEnd;
    double _marginLeft;
    double _marginRight;
}

@property(nonatomic) double marginRight; // @synthesize marginRight=_marginRight;
@property(nonatomic) double marginLeft; // @synthesize marginLeft=_marginLeft;
@property(nonatomic) _Bool screenWidth; // @synthesize screenWidth=_screenWidth;
@property(nonatomic) long long selectionEnd; // @synthesize selectionEnd;
@property(nonatomic) long long selectionBegin; // @synthesize selectionBegin;
@property(nonatomic) long long endCursor; // @synthesize endCursor;
@property(nonatomic) long long initCursor; // @synthesize initCursor;
@property(nonatomic) _Bool confirmHold; // @synthesize confirmHold;
@property(nonatomic) _Bool fixed; // @synthesize fixed;
@property(nonatomic) _Bool initKeyBoard; // @synthesize initKeyBoard;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin;
@property(nonatomic) _Bool multiLine; // @synthesize multiLine;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue;
@property(nonatomic) long long maxLength; // @synthesize maxLength;
@property(copy, nonatomic) NSString *userData; // @synthesize userData;
@property(nonatomic) unsigned int inputId; // @synthesize inputId;
@property(nonatomic) __weak id <WATextInputDelegate> keyboardDelegate; // @synthesize keyboardDelegate;
@property(nonatomic) _Bool showConfirmButton; // @synthesize showConfirmButton;
- (void).cxx_destruct;
- (void)updateDropHeight:(_Bool)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onSelect:(id)arg1 value:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showDropList:(id)arg1 above:(_Bool)arg2;
- (void)onKeyboardWillHide;
- (_Bool)isAutoSize;
- (void)setAutoSize:(_Bool)arg1;
- (double)getContentHeight;
- (long long)getLineCount;
- (void)setReturnKeyType:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setVisible:(_Bool)arg1;
- (_Bool)isBold;
- (double)getFontSize;
- (void)setInputFrame:(struct CGRect)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(double)arg1 bold:(_Bool)arg2;
- (id)getAccessoryButton;
- (struct CGRect)getVisibleRect;
- (void)removeFromParent;
- (void)becomeFirstResponder:(_Bool)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (id)subStringWith:(id)arg1 ToIndex:(long long)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setInputPlaceholder:(id)arg1 placeholderStyle:(id)arg2;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (void)setInputValue:(id)arg1 cursorPos:(long long)arg2;
- (id)getInputValue;
- (void)setSelectedTextRange:(id)arg1;
- (id)getSelectedTextRange;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)layoutSubviews;
- (void)setPasswordMode:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

