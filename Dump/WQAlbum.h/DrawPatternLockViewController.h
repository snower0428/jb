//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSMutableArray;

@interface DrawPatternLockViewController : UIViewController
{
    NSMutableArray *_paths;
    BOOL isSetNow;
    id <WQSetGestureDelegte> delegate;
}

@property(retain, nonatomic) id <WQSetGestureDelegte> delegate; // @synthesize delegate;
@property(nonatomic) BOOL isSetNow; // @synthesize isSetNow;
- (void).cxx_destruct;
- (id)getKey;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (id)init;

@end
