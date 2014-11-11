//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDate, NSDateFormatter, NSMutableArray, TBCreateTradeNodeTypeInput, UIDatePicker, UITableView;

@interface TBDateSelectorController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *dateArray;
    int currentType;
    UIDatePicker *datePicker;
    UITableView *_tableView;
    NSDate *selectedDate;
    NSDateFormatter *dateFormatter;
    TBCreateTradeNodeTypeInput *_inputObject;
}

@property(retain, nonatomic) TBCreateTradeNodeTypeInput *inputObject; // @synthesize inputObject=_inputObject;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)datePickerValueChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)loadView;
- (id)initWithDateSelectorType:(int)arg1 forObject:(id)arg2;

@end

