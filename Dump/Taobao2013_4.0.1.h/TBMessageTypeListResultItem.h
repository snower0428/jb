//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class TBMessageTypeModelItem;

__attribute__((visibility("hidden")))
@interface TBMessageTypeListResultItem : TBModel
{
    TBMessageTypeModelItem *_model;
}

@property(retain, nonatomic) TBMessageTypeModelItem *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

