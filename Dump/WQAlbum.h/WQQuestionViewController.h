//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FPPopoverControllerDelegate.h"
#import "UITableViewDelegate.h"

@class FPPopoverController, NSString, UIButton, UITextField;

@interface WQQuestionViewController : UIViewController <FPPopoverControllerDelegate, UITableViewDelegate>
{
    NSString *question;
    FPPopoverController *popover;
    UITextField *answerTF;
    UIButton *questionBtn;
}

@property(retain, nonatomic) UIButton *questionBtn; // @synthesize questionBtn;
@property(retain, nonatomic) UITextField *answerTF; // @synthesize answerTF;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)popover:(id)arg1;
- (void)selectQuestionAction:(id)arg1;
- (void)saveQuestionAndAnswer:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end

