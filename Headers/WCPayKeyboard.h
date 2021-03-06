//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIButton, UIImageView;

@interface WCPayKeyboard : UIView
{
    UIImageView *_imgDelete;
    UIImageView *_imgDeleteHL;
    _Bool _showConfirm;
    id <UITextInput> _textView;
    long long _maxLength;
    id <WACustomKeyboardDelegate> _delegate;
    NSTimer *_timer;
    double _keyboardHeight;
    UIButton *_extraButton;
    long long _type;
}

@property(nonatomic) _Bool showConfirm; // @synthesize showConfirm=_showConfirm;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *extraButton; // @synthesize extraButton=_extraButton;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <WACustomKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
- (void).cxx_destruct;
- (double)getSafeBottomInset;
- (void)characterPressed:(id)arg1;
- (void)deletePressed:(id)arg1;
- (void)characterDeleted;
- (void)startDelete;
- (void)deleteReleased:(id)arg1;
- (void)dismissPressed:(id)arg1;
- (void)setupFrameAndBackGround;
@property(retain) id <UITextInput> textView; // @synthesize textView=_textView;
- (void)setExtraKey:(id)arg1;
- (void)setup4X4Keyboard:(_Bool)arg1;
- (void)setup3X4Keyboard:(_Bool)arg1;
- (void)setType:(long long)arg1 showConfirm:(_Bool)arg2;
- (void)layoutSubviews;
- (_Bool)enableInputClicksWhenVisible;

@end

