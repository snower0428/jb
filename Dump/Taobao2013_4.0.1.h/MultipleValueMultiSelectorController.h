//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MultipleValueSelectorController.h"

@class NSMutableArray;

@interface MultipleValueMultiSelectorController : MultipleValueSelectorController
{
    NSMutableArray *_selectedRows;
}

@property(retain, nonatomic) NSMutableArray *selectedRows; // @synthesize selectedRows=_selectedRows;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

@end

