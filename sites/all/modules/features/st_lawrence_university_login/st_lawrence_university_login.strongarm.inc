<?php

/**
 * @file
 * st_lawrence_university_login.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function st_lawrence_university_login_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_authentication_conf';
  $strongarm->value = array(
    'allowOnlyIfTextInDn' => array(),
    'allowTestPhp' => '',
    'authenticationMode' => 1,
    'cookieExpire' => NULL,
    'emailOption' => 3,
    'emailUpdate' => 1,
    'excludeIfNoAuthorizations' => NULL,
    'excludeIfTextInDn' => array(),
    'ldapImplementation' => NULL,
    'ldapUserHelpLinkText' => 'Logon Help',
    'ldapUserHelpLinkUrl' => NULL,
    'loginUIPasswordTxt' => NULL,
    'loginUIUsernameTxt' => NULL,
    'seamlessLogin' => NULL,
    'sids' => array(
      'slu_directory' => 'slu_directory',
    ),
    'ssoExcludedPaths' => array(),
    'ssoRemoteUserStripDomainName' => NULL,
  );
  $export['ldap_authentication_conf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_servers_encryption';
  $strongarm->value = 10;
  $export['ldap_servers_encryption'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_servers_encrypt_key';
  $strongarm->value = 'BVzVW4Dux/';
  $export['ldap_servers_encrypt_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_servers_require_ssl_for_credentails';
  $strongarm->value = 0;
  $export['ldap_servers_require_ssl_for_credentails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_user_conf';
  $strongarm->value = array(
    'accountsWithSameEmail' => 0,
    'acctCreation' => 4,
    'disableAdminPasswordField' => 1,
    'drupalAcctProvisionServer' => 'slu_directory',
    'drupalAcctProvisionTriggers' => array(
      1 => '1',
      2 => '2',
    ),
    'ldapEntryProvisionServer' => 0,
    'ldapEntryProvisionTriggers' => array(
      3 => 0,
      6 => 0,
      7 => 0,
      8 => 0,
    ),
    'ldapUserSynchMappings' => array(),
    'manualAccountConflict' => '2',
    'orphanedCheckQty' => '100',
    'orphanedDrupalAcctBehavior' => 'ldap_user_orphan_email',
    'userConflictResolve' => 2,
  );
  $export['ldap_user_conf'] = $strongarm;

  return $export;
}
