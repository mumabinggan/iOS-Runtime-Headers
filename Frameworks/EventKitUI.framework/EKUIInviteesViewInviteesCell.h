/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewInviteesCell : UITableViewCell {
    UILabel * _commentLabel;
    EKUILabeledAvatarView * _contactAvatarView;
    BOOL  _hideStatus;
    NSLayoutConstraint * _minimumHeightConstraint;
    NSLayoutConstraint * _nameBaselineToTopConstraint;
    UILabel * _nameLabel;
    NSArray * _persistentConstraints;
    NSArray * _removableConstraints;
    BOOL  _showSpinner;
    UIActivityIndicatorView * _spinner;
    UIImageView * _statusImageView;
}

@property (nonatomic, retain) UILabel *commentLabel;
@property (nonatomic, retain) EKUILabeledAvatarView *contactAvatarView;
@property BOOL hideStatus;
@property (nonatomic, retain) NSLayoutConstraint *minimumHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *nameBaselineToTopConstraint;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) NSArray *persistentConstraints;
@property (nonatomic, retain) NSArray *removableConstraints;
@property (nonatomic) BOOL showSpinner;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (nonatomic, retain) UIImageView *statusImageView;

+ (id)_commentLabelFont;
+ (float)_leftTextInset;
+ (id)_nameLabelFont;

- (void).cxx_destruct;
- (id)commentLabel;
- (id)contactAvatarView;
- (BOOL)hideStatus;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)minimumHeightConstraint;
- (id)nameBaselineToTopConstraint;
- (id)nameLabel;
- (id)persistentConstraints;
- (id)removableConstraints;
- (void)setCommentLabel:(id)arg1;
- (void)setContactAvatarView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHideStatus:(BOOL)arg1;
- (void)setMinimumHeightConstraint:(id)arg1;
- (void)setNameBaselineToTopConstraint:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPersistentConstraints:(id)arg1;
- (void)setRemovableConstraints:(id)arg1;
- (void)setShowSpinner:(BOOL)arg1;
- (void)setSpinner:(id)arg1;
- (void)setStatusImageView:(id)arg1;
- (BOOL)showSpinner;
- (id)spinner;
- (id)statusImageView;
- (void)updateConstraints;
- (void)updateWithParticipantForSorting:(id)arg1;
- (void)updateWithParticipantForSorting:(id)arg1 availabilityType:(int)arg2 showSpinner:(BOOL)arg3 animated:(BOOL)arg4;

@end