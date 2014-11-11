//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTViewHierarchyDelegate.h"

@class MTViewHierarchyObserver, NSDictionary, NSMutableArray, NSString;

@interface MTThemeManager : NSObject <MTViewHierarchyDelegate>
{
    MTViewHierarchyObserver *_viewHierarchyObserver;
    NSDictionary *_themeSettings;
    NSMutableArray *_viewClasses;
    NSMutableArray *_observedSubviews;
    NSString *_themeName;
}

@property(retain, nonatomic) NSString *themeName; // @synthesize themeName=_themeName;
- (void).cxx_destruct;
- (void)startManagingTheme:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1 forClass:(Class)arg2;
- (id)init;

@end
