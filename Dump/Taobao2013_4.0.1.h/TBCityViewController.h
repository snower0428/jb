//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBCityStatusDelegate.h"

@class TBCityStatusHandler;

@interface TBCityViewController : TBViewController <TBCityStatusDelegate>
{
    TBCityStatusHandler *_statusHandler;
}

@property(retain, nonatomic) TBCityStatusHandler *statusHandler; // @synthesize statusHandler=_statusHandler;
- (void).cxx_destruct;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (void)viewDidLoad;
- (id)tbBarMenuItem;
- (void)setupToolbarItems;

@end
