//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TMLocalBrandManager : NSObject
{
    NSMutableArray *_intlBrands;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *intlBrands; // @synthesize intlBrands=_intlBrands;
- (void).cxx_destruct;
- (void)clearUp;
- (void)reloadData:(id)arg1;
- (void)writeToFile;
- (id)dictDescription;
- (void)readFromFile;
- (id)init;

@end

