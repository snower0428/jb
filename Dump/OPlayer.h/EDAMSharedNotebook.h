//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface EDAMSharedNotebook : NSObject <NSCoding>
{
    long long __id;
    int __userId;
    NSString *__notebookGuid;
    NSString *__email;
    BOOL __notebookModifiable;
    BOOL __requireLogin;
    long long __serviceCreated;
    NSString *__shareKey;
    NSString *__username;
    BOOL __id_isset;
    BOOL __userId_isset;
    BOOL __notebookGuid_isset;
    BOOL __email_isset;
    BOOL __notebookModifiable_isset;
    BOOL __requireLogin_isset;
    BOOL __serviceCreated_isset;
    BOOL __shareKey_isset;
    BOOL __username_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetUsername;
- (BOOL)usernameIsSet;
@property(retain, nonatomic, getter=username, setter=setUsername:) NSString *username; // @dynamic username;
- (void)unsetShareKey;
- (BOOL)shareKeyIsSet;
@property(retain, nonatomic, getter=shareKey, setter=setShareKey:) NSString *shareKey; // @dynamic shareKey;
- (void)unsetServiceCreated;
- (BOOL)serviceCreatedIsSet;
@property(nonatomic, getter=serviceCreated, setter=setServiceCreated:) long long serviceCreated; // @dynamic serviceCreated;
- (void)unsetRequireLogin;
- (BOOL)requireLoginIsSet;
@property(nonatomic, getter=requireLogin, setter=setRequireLogin:) BOOL requireLogin; // @dynamic requireLogin;
- (void)unsetNotebookModifiable;
- (BOOL)notebookModifiableIsSet;
@property(nonatomic, getter=notebookModifiable, setter=setNotebookModifiable:) BOOL notebookModifiable; // @dynamic notebookModifiable;
- (void)unsetEmail;
- (BOOL)emailIsSet;
@property(retain, nonatomic, getter=email, setter=setEmail:) NSString *email; // @dynamic email;
- (void)unsetNotebookGuid;
- (BOOL)notebookGuidIsSet;
@property(retain, nonatomic, getter=notebookGuid, setter=setNotebookGuid:) NSString *notebookGuid; // @dynamic notebookGuid;
- (void)unsetUserId;
- (BOOL)userIdIsSet;
@property(nonatomic, getter=userId, setter=setUserId:) int userId; // @dynamic userId;
- (void)unsetId;
- (BOOL)idIsSet;
@property(nonatomic, getter=id, setter=setId:) long long id; // @dynamic id;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(long long)arg1 userId:(int)arg2 notebookGuid:(id)arg3 email:(id)arg4 notebookModifiable:(BOOL)arg5 requireLogin:(BOOL)arg6 serviceCreated:(long long)arg7 shareKey:(id)arg8 username:(id)arg9;

@end

