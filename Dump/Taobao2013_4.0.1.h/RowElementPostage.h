//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface RowElementPostage : NSObject
{
    NSString *_postageId;
    NSArray *_postageList;
}

@property(retain, nonatomic) NSArray *postageList; // @synthesize postageList=_postageList;
@property(retain, nonatomic) NSString *postageId; // @synthesize postageId=_postageId;
- (void).cxx_destruct;
- (int)selectedIndex;
- (id)selectedPostage;

@end
