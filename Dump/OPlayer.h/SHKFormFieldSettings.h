//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface SHKFormFieldSettings : NSObject
{
    NSString *label;
    NSString *key;
    int type;
    NSString *start;
    NSString *value;
    NSMutableDictionary *optionPickerInfo;
    NSString *optionDetailLabelDefault;
}

+ (id)label:(id)arg1 key:(id)arg2 type:(int)arg3 start:(id)arg4 optionPickerInfo:(id)arg5 optionDetailLabelDefault:(id)arg6;
+ (id)label:(id)arg1 key:(id)arg2 type:(int)arg3 start:(id)arg4;
@property(retain, nonatomic) NSString *optionDetailLabelDefault; // @synthesize optionDetailLabelDefault;
@property(retain, nonatomic) NSMutableDictionary *optionPickerInfo; // @synthesize optionPickerInfo;
@property(retain, nonatomic) NSString *value; // @synthesize value;
@property(retain, nonatomic) NSString *start; // @synthesize start;
@property int type; // @synthesize type;
@property(retain, nonatomic) NSString *key; // @synthesize key;
@property(retain, nonatomic) NSString *label; // @synthesize label;
- (id)optionPickerValueForIndexes:(id)arg1;
- (void)dealloc;

@end

