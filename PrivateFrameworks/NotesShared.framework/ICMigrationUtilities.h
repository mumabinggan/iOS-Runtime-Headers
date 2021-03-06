/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICMigrationUtilities : NSObject

+ (void)deleteMigratedHTMLAccountIfNecessaryForModernAccount:(id)arg1;
+ (void)deleteMigratedHTMLAccounts;
+ (void)fetchAndSetMigrationStateWithCompletionHandler:(id /* block */)arg1;
+ (void)fetchMigrationStateAndUserRecordWithCompletionHandler:(id /* block */)arg1;
+ (void)fetchMigrationStateWithCompletionHandler:(id /* block */)arg1;
+ (void)saveDidChooseToMigrate:(bool)arg1 didFinishMigration:(bool)arg2 didMigrateOnMac:(bool)arg3 toACAccount:(id)arg4 inStore:(id)arg5 completionHandler:(id /* block */)arg6;
+ (void)updateAllLegacyAccountMigrationStates;
+ (void)updateLegacyAccountMigrationStateForModernAccount:(id)arg1;

@end
