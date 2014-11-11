//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICPrototypeTableCell.h"

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface UICPrototypeTableCellButton : UICPrototypeTableCell
{
    NSString *buttonTitle;
    NSObject *respTarget;
    SEL respSelector;
}

@property(nonatomic) NSObject *respTarget; // @synthesize respTarget;
@property(nonatomic) SEL respSelector; // @synthesize respSelector;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle;
- (void)dealloc;
- (id)cellIdentifier;
- (id)tableCellViewWithReuseId:(id)arg1;
- (id)initWithTitle:(id)arg1 withUserDefaultsKey:(int)arg2 AcitonTarget:(id)arg3 ActionMethod:(SEL)arg4;

@end

