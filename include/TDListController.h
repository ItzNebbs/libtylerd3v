#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import <TDLinkCell.h>

@interface TDListController : PSListController
{
	NSArray *_allSpecifiers;
}
- (NSString *)plistName;
- (NSString *)title;
- (void)applyModificationsToSpecifiers:(NSMutableArray *)specifiers;
- (void)removeDisabledGroups:(NSMutableArray *)specifiers;
@end