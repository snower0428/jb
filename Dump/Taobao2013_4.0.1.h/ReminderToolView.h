//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "RemindButtonDelegate.h"

@class NSMutableDictionary, ReminderButton, UIButton;

@interface ReminderToolView : UIView <RemindButtonDelegate>
{
    BOOL _isAallDay;
    BOOL _isSetUp;
    int _remindTime;
    NSMutableDictionary *_isAllDayButtons;
    NSMutableDictionary *_notAllDayButtons;
    ReminderButton *_selectedButton;
    id <ReminderToolViewDelegate> _delegate;
    UIButton *_beforeBtn;
}

@property(retain, nonatomic) UIButton *beforeBtn; // @synthesize beforeBtn=_beforeBtn;
@property id <ReminderToolViewDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL isSetUp; // @synthesize isSetUp=_isSetUp;
@property(retain, nonatomic) ReminderButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) NSMutableDictionary *notAllDayButtons; // @synthesize notAllDayButtons=_notAllDayButtons;
@property(retain, nonatomic) NSMutableDictionary *isAllDayButtons; // @synthesize isAllDayButtons=_isAllDayButtons;
@property(nonatomic) BOOL isAllDay; // @synthesize isAllDay=_isAallDay;
- (void).cxx_destruct;
- (void)sendSelectedRemindTime:(int)arg1;
- (void)displayWithIsAllDay:(BOOL)arg1 andRemindTime:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewDidLoad;
- (void)setUp;
- (void)displayButtons;
- (void)setUpButtons;
@property int remindTime; // @synthesize remindTime=_remindTime;
- (BOOL)isAallDay;

@end

