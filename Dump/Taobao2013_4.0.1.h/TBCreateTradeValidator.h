//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSString;

@interface TBCreateTradeValidator : TBModel
{
    NSString *type;
}

+ (id)modelWithJSON:(id)arg1;
+ (id)typeAndClassDictionary;
@property(retain, nonatomic) NSString *type; // @synthesize type;
- (void).cxx_destruct;
- (BOOL)executeCheckForObject:(id)arg1;

@end
