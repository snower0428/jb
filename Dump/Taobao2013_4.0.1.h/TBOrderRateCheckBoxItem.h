//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOrderRateBaseTypeItem.h"

@interface TBOrderRateCheckBoxItem : TBOrderRateBaseTypeItem
{
    BOOL _checked;
    BOOL _disabled;
}

@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

