//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMBaseRowItem.h"

@class TBMOperation;

@interface TBMOperationRowItem : TBMBaseRowItem
{
    TBMOperation *_operation;
}

+ (id)itemWithOperation:(id)arg1;
@property(retain, nonatomic) TBMOperation *operation; // @synthesize operation=_operation;
- (void)dealloc;

@end
