//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TBShopSubCatInfoItem : TBModel
{
    NSString *_id;
    NSString *_imagePath;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

