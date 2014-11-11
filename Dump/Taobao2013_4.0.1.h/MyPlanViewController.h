//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "DatePickerToolViewDelegate.h"
#import "ReminderToolViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class DatePickerToolView, NSDate, NSDictionary, NSManagedObjectContext, NSNumber, NSString, Plan, ReminderToolView, UIButton, UIScrollView, UIView;

@interface MyPlanViewController : TBViewController <ReminderToolViewDelegate, DatePickerToolViewDelegate, UIAlertViewDelegate>
{
    BOOL _isAllDay;
    BOOL _editable;
    BOOL _needKeep;
    NSManagedObjectContext *_managedObjectContext;
    NSNumber *_remindTime;
    NSDate *_startTime;
    NSString *_eventTitle;
    NSNumber *_sourceId;
    NSString *_eventID;
    NSString *_id;
    NSString *_userId;
    NSDictionary *_eventInfo;
    UIScrollView *_scrollerContainer;
    UIButton *_planTitle;
    UIButton *_planRemindBtn;
    UIButton *_planDateFromBtn;
    UIView *_toolView;
    DatePickerToolView *_datePickerView;
    ReminderToolView *_remindView;
    UIButton *_curSelectedDateBtn;
    NSDictionary *_reminder;
    NSDictionary *_repeater;
    NSString *_completeAction;
    Plan *_plan;
    NSDictionary *_planDic;
    Plan *_conflictPlan;
    NSDate *_endTime;
    NSDate *_alertTime;
    NSString *_eventURL;
    NSString *_bdid;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) BOOL needKeep; // @synthesize needKeep=_needKeep;
@property(retain, nonatomic) NSString *bdid; // @synthesize bdid=_bdid;
@property(nonatomic) BOOL editable; // @synthesize editable=_editable;
@property(retain, nonatomic) NSString *eventURL; // @synthesize eventURL=_eventURL;
@property(retain, nonatomic) NSDate *alertTime; // @synthesize alertTime=_alertTime;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) Plan *conflictPlan; // @synthesize conflictPlan=_conflictPlan;
@property(retain, nonatomic) NSDictionary *planDic; // @synthesize planDic=_planDic;
@property(retain, nonatomic) Plan *plan; // @synthesize plan=_plan;
@property(retain, nonatomic) NSString *completeAction; // @synthesize completeAction=_completeAction;
@property(retain, nonatomic) NSDictionary *repeater; // @synthesize repeater=_repeater;
@property(retain, nonatomic) NSDictionary *reminder; // @synthesize reminder=_reminder;
@property(retain, nonatomic) UIButton *curSelectedDateBtn; // @synthesize curSelectedDateBtn=_curSelectedDateBtn;
@property(retain, nonatomic) ReminderToolView *remindView; // @synthesize remindView=_remindView;
@property(retain, nonatomic) DatePickerToolView *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(retain, nonatomic) UIView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) UIButton *planDateFromBtn; // @synthesize planDateFromBtn=_planDateFromBtn;
@property(retain, nonatomic) UIButton *planRemindBtn; // @synthesize planRemindBtn=_planRemindBtn;
@property(retain, nonatomic) UIButton *planTitle; // @synthesize planTitle=_planTitle;
@property(retain, nonatomic) UIScrollView *scrollerContainer; // @synthesize scrollerContainer=_scrollerContainer;
@property(copy, nonatomic) NSDictionary *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
@property(retain, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(retain, nonatomic) NSNumber *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSString *eventTitle; // @synthesize eventTitle=_eventTitle;
@property(nonatomic) BOOL isAllDay; // @synthesize isAllDay=_isAllDay;
@property(retain, nonatomic) NSNumber *remindTime; // @synthesize remindTime=_remindTime;
- (void).cxx_destruct;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (id)saveContext;
- (id)switchToReminderString:(id)arg1;
- (void)adjustContainerPadding:(int)arg1;
- (void)showToolView;
- (void)hideToolView;
- (void)maskViewTapped:(id)arg1;
- (void)saveSelectedDatePicker:(id)arg1 isAllDay:(BOOL)arg2;
- (void)saveSelectedRepeater:(id)arg1;
- (void)saveSelectedReminder:(id)arg1;
- (void)openDateToolView:(id)arg1;
- (void)openRemindToolView:(id)arg1;
- (void)animateTextField:(id)arg1 up:(BOOL)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)refreshPlan;
- (void)updateUserPlan;
- (void)addUserPlan;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)completeClick;
- (void)backToLastView;
- (void)showPlanInfo;
- (void)drawNavigation;
- (void)setUpData;
- (void)setUpStyle;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void)displayStartTime:(id)arg1;
- (id)md5:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

