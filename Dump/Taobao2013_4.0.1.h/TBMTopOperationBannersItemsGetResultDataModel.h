//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DOBase.h"

@class NSDictionary, NSString;

@interface TBMTopOperationBannersItemsGetResultDataModel : DOBase
{
    NSString *_name;
    NSString *_image;
    NSString *_actionType;
    NSDictionary *_actionData;
}

@property(retain, nonatomic) NSDictionary *actionData; // @synthesize actionData=_actionData;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;

@end
