/*
 * Copyright (C) 2015, Wazuh Inc.
 * January 17, 2018.
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation.
 */

#ifndef DEBUG_MESSAGES_H
#define DEBUG_MESSAGES_H

/* File integrity monitoring debug messages */
#define FIM_DIFF_SKIPPED                    "(6200): Diff execution skipped for containing insecure characters."
#define FIM_SCHED_BATCH                     "(6201): Setting SCHED_BATCH returned: '%d'"
#define FIM_LOCAL_DIFF_DELETE               "(6202): Deleting backup '%s'. Not monitored anymore."
#define FIM_FILE_IGNORE_RESTRICT            "(6203): Ignoring entry '%s' due to restriction '%s'"
#define FIM_IGNORE_ENTRY                    "(6204): Ignoring path '%s' due to pattern '%s'"
#define FIM_IGNORE_SREGEX                   "(6205): Ignoring path '%s' due to sregex '%s'"
#define FIM_TAG_ADDED                       "(6206): Adding tag '%s' to directory '%s'"
#define FIM_READING_REGISTRY                "(6207): Attempt to read: '%s%s'"
#define FIM_CLIENT_CONFIGURATION            "(6208): Reading Client Configuration [%s]"
#define FIM_LOCALDIFF_DELETE                "(6209): Deleting '%s' from local hash table."
#define FIM_CANNOT_ACCESS_FILE              "(6210): Cannot access '%s': it was removed during scan."
#define FIM_SCANNING_FILE                   "(6211): File '%s'"
#define FIM_SIMBOLIC_LINK_DISABLE           "(6212): Follow symbolic links disabled."
#define FIM_CHECK_LINK_REALPATH             "(6213): Cannot get the real path of the link '%s'"
#define FIM_HASH_ADD_FAIL                   "(6214): Not enough memory to add inode to db: '%s' (%s) "
#define FIM_HASH_UPDATE                     "(6215): Updating path '%s' in inode hash table: '%s' (%s) "
#define FIM_SCANNING_IRREGFILE              "(6216): IRREG File: '%s'"
#define FIM_MAX_RECURSION_LEVEL             "(6217): Maximum level of recursion reached. Depth:%d recursion_level:%d '%s'"
#define FIM_SYMBOLIC_LINK_DISCARDED         "(6218): Discarding symbolic link '%s' is already added in the configuration."
#define FIM_SYMBOLIC_LINK_ADD               "(6219): Directory added to FIM configuration by link '%s'"

#define FIM_FREQUENCY_DIRECTORY             "(6221): Directory loaded from syscheck db: '%s'"
#define FIM_STAT_FAILED                     "(6222): Stat() function failed on: '%s' due to [(%d)-(%s)]"
#define FIM_SKIP_NFS                        "(6223): FIM skip_nfs=%d, '%s'::is_nfs=%d"
#define FIM_REALTIME_HASH_DUP               "(6224): Entry '%s' already exists in the RT hash table."
#define FIM_REALTIME_MONITORING             "(6225): The '%s' directory starts to be monitored in real-time mode."
#define FIM_REALTIME_NEWPATH                "(6226): Scanning new file '%s' with options for directory '%s'"
#define FIM_REALTIME_NEWDIRECTORY           "(6227): Directory added for real time monitoring: '%s'"
#define FIM_REALTIME_DISCARD_EVENT          "(6228): Real-time event with same checksum for file: '%s'. Ignoring it."
#define FIM_WHODATA_HANDLE_UPDATE           "(6229): The handler ('%s') will be updated."
#define FIM_WHODATA_NEWDIRECTORY            "(6230): Monitoring with Audit: '%s'"
#define FIM_WHODATA_SCAN                    "(6231): The '%s' directory has been scanned after detecting event of new files."
#define FIM_WHODATA_SCAN_ABORTED            "(6232): Scanning of the '%s' directory is aborted because something has gone wrong."
#define FIM_WHODATA_CHECKTHREAD             "(6233): Checking thread set to '%d' seconds."
#define FIM_LINK_ALREADY_ADDED              "(6234): Directory '%s' already monitored, ignoring link."
#define FIM_WHODATA_FULLQUEUE               "(6235): Real-time Whodata events queue for Windows is full. Removing the first '%d'"
#define FIM_WHODATA_EVENT_DELETED           "(6236): '%d' events have been deleted from the whodata list."
#define FIM_WHODATA_EVENTQUEUE_VALUES       "(6237): Whodata event queue values for Windows -> max_size:'%d' | max_remove:'%d' | alert_threshold:'%d'",
#define FIM_WHODATA_IGNORE                  "(6238): The file '%s' has been marked as ignored. It will be discarded."
#define FIM_WHODATA_NOT_ACTIVE              "(6239): '%s' is discarded because its monitoring is not activated."
#define FIM_WHODATA_CANCELED                "(6240): The monitoring of '%s' in whodata mode has been canceled. Added to the ignore list."
#define FIM_WHODATA_DIRECTORY_SCANNED       "(6241): The '%s' directory has been scanned. It does not need to be scanned again."
#define FIM_WHODATA_NEW_FILES               "(6242): New files have been detected in the '%s' directory after the last scan."
#define FIM_WHODATA_DIRECTORY_DISCARDED     "(6243): The '%s' directory has been discarded because it is not being monitored in whodata mode."
#define FIM_WHODATA_CHECK_NEW_FILES         "(6244): New files have been detected in the '%s' directory and will be scanned."
#define FIM_WHODATA_NO_NEW_FILES            "(6245): The '%s' directory has not been scanned because no new files have been detected. Mask: '%x'"
#define FIM_WHODATA_INVALID_UID             "(6246): Invalid identifier for user '%s'"
#define FIM_AUDIT_EVENT                     "(6247): audit_event: uid=%s, auid=%s, euid=%s, gid=%s, pid=%i, ppid=%i, inode=%s, path=%s, pname=%s",
#define FIM_AUDIT_EVENT1                    "(6248): audit_event_1/2: uid=%s, auid=%s, euid=%s, gid=%s, pid=%i, ppid=%i, inode=%s, path=%s, pname=%s",
#define FIM_AUDIT_EVENT2                    "(6249): audit_event_2/2: uid=%s, auid=%s, euid=%s, gid=%s, pid=%i, ppid=%i, inode=%s, path=%s, pname=%s",
#define FIM_AUDIT_DELETE_RULE               "(6250): Deleting Audit rules."
#define FIM_AUDIT_MATCH_KEY                 "(6251): Match audit_key: '%s'"
#define FIM_HEALTHCHECK_CREATE              "(6252): Whodata health-check: Detected file creation event (%s)"
#define FIM_HEALTHCHECK_DELETE              "(6253): Whodata health-check: Detected file deletion event (%s)"
#define FIM_HEALTHCHECK_UNRECOGNIZED_EVENT  "(6254): Whodata health-check: Unrecognized event (%s)"
#define FIM_HEALTHCHECK_THREAD_ACTIVE       "(6255): Whodata health-check: Reading thread active."
#define FIM_HEALTHCHECK_THREAD_FINISHED     "(6256): Whodata health-check: Reading thread finished."
#define FIM_HEALTHCHECK_CREATE_ERROR        "(6257): Whodata health-check: Failed to receive creation event."
#define FIM_UNABLE_TO_READ_TEMP_FILE        "(6258): Detected error or EOF before processing all entries."
#define FIM_REG_IGNORE_SREGEX               "(6259): Ignoring '%s' '%s %s' due to sregex '%s'"
#define FIM_REG_IGNORE_ENTRY                "(6260): Ignoring '%s' '%s %s' due to '%s'"
#define FIM_HEALTHCHECK_SUCCESS             "(6261): Whodata health-check: Success."
#define FIM_HEALTHCHECK_CHECK_RULE          "(6262): Couldn't delete audit health check rule."
#define FIM_SACL_CHECK_CONFIGURE            "(6263): Setting up SACL for '%s'"
#define FIM_REACHED_MAX_FPS                 "(6264): Maximum number of files read per second reached, sleeping."
#define FIM_SACL_RESTORED                   "(6265): The SACL of '%s' has been restored correctly."
#define FIM_SACL_CONFIGURE                  "(6266): The SACL of '%s' will be configured."
#define FIM_SACL_NOT_FOUND                  "(6267): No SACL found on target. A new one will be created."
#define FIM_ELEVATE_PRIVILEGE               "(6268): The '%s' privilege has been added."
#define FIM_REDUCE_PRIVILEGE                "(6269): The '%s' privilege has been removed."
#define FIM_AUDIT_NEWRULE                   "(6270): Added audit rule for monitoring directory: '%s'"
#define FIM_AUDIT_RULEDUP                   "(6271): Audit rule for monitoring directory '%s' already added."
#define FIM_INOTIFY_ADD_WATCH               "(6272): Unable to add inotify watch to real time monitoring: '%s'. '%d' '%d':'%s'"
#define FIM_AUDIT_NOCONF                    "(6273): Cannot apply Audit config."
#define FIM_AUDIT_NORULES                   "(6274): No rules added. Audit events reader thread will not start."
#define FIM_AUDIT_RELOADING_RULES           "(6275): Reloading Audit rules."
#define FIM_AUDIT_RELOADED_RULES            "(6276): Audit rules reloaded. Rules loaded: %i"
#define FIM_AUDIT_THREAD_STOPED             "(6277): Audit thread finished."
#define FIM_AUDIT_HEALTHCHECK_RULE          "(6278): Couldn't add audit health check rule."
#define FIM_AUDIT_HEALTHCHECK_START         "(6279): Whodata health-check: Starting."
#define FIM_AUDIT_HEALTHCHECK_FILE          "(6280): Couldn't create audit health check file."
#define FIM_SYSCOM_ARGUMENTS                "(6281): SYSCOM %s needs arguments."
#define FIM_SYSCOM_UNRECOGNIZED_COMMAND     "(6282): SYSCOM Unrecognized command '%s'"
#define FIM_SYSCOM_FAIL_GETCONFIG           "(6283): At SYSCOM getconfig: Could not get '%s' section."
#define FIM_SYSCOM_REQUEST_READY            "(6284): Local requests thread ready."
#define FIM_SYSCOM_EMPTY_MESSAGE            "(6285): Empty message from local client."
#define FIM_SYSCOM_THREAD_FINISED           "(6286): Local server thread finished."
#define FIM_CONFIGURATION_FILE              "(6287): Reading configuration file: '%s'"
#define FIM_SCAL_NOREFRESH                  "(6288): Could not refresh the SACL of '%s'. Its event will not be reported."
#define FIM_DISCARD_RECYCLEBIN              "(6289): File '%s' is in the recycle bin. It will be discarded."
#define FIM_REALTIME_ADD                    "(6290): Unable to add directory to real time monitoring: '%s'"
#define FIM_WHODATA_REPLACELINK             "(6291): Replacing the symbolic link: '%s' -> '%s'"
#define FIM_WHODATA_FILENOEXIST             "(6292): The '%s' file does not exist, but this will be notified when the corresponding event is received."
#define FIM_LINKCHECK_TIME                  "(6293): Configured symbolic links will be checked every %d seconds."
#define FIM_LINKCHECK_CHANGE                "(6294): Configured symbolic links will be checked every %d seconds."
#define FIM_LINKCHECK_NOCHANGE              "(6295): The symbolic link of '%s' has not changed."
#define FIM_LINKCHECK_FINALIZE              "(6296): Links check finalized."
#define FIM_LINKCHECK_FILE                  "(6297): File '%s' was inside the unlinked directory '%s'. It will be notified."
#define FIM_WHODATA_REMOVE_FOLDEREVENT      "(6298): Removed folder event received for '%s'"
#define FIM_WHODATA_UNCONTROLLED_EVENT      "(6299): Uncontrolled whodata event on '%s'"
#define FIM_WHODATA_DIRECTORY_REMOVED       "(6300): Directory '%s' has been moved or removed."
#define FIM_WHODATA_UNCONTROLLED_REMOVE     "(6301): Uncontrolled removed folder event."
#define FIM_WHODATA_IGNORE_EVENT            "(6302): Ignoring removing event for '%s' directory."
#define FIM_WHODATA_DEVICE_LETTER           "(6303): Device '%s' associated with the mounting point '%s'"
#define FIM_WHODATA_DEVICE_PATH             "(6304): Find device '%s' in path '%s'"
#define FIM_WHODATA_DEVICE_REPLACE          "(6305): Replacing '%s' to '%s'"
#define FIM_WHODATA_PATH_NOPROCCESED        "(6306): The path could not be processed in Whodata mode. Error: %u"
#define FIM_CONVERT_PATH                    "(6307): Convert '%s' to '%s' to process the FIM events."
#define FIM_WHODATA_FOLDER_REMOVED          "(6308): File '%s' was inside the removed directory '%s'. It will be notified."
#define FIM_WHODATA_IGNORE_FILEEVENT        "(6309): Ignoring remove event for file '%s' because it has already been reported."
#define FIM_CHECKSUM_MSG                    "(6310): Sending msg to the server: %s"
#define FIM_PATH_EXEED_MAX                  "(6311): The path exceeds maximum permitted (%d): '%s'"
#define FIM_DBSYNC_NO_ARGUMENT              "(6312): Data synchronization command '%s' with no argument."
#define FIM_DBSYNC_UNKNOWN_CMD              "(6313): Unknown data synchronization command: '%s'"
#define FIM_DBSYNC_INVALID_ARGUMENT         "(6314): Invalid data synchronization argument: '%s'"
#define FIM_DBSYNC_DEC_ID                   "(6315): Setting global ID back to lower message ID (%ld)"
#define FIM_DBSYNC_DROP_MESSAGE             "(6316): Dropping message with id (%ld) greater than global id (%ld)"
#define FIM_DBSYNC_SEND                     "(6317): Sending integrity control message: %s"
#define FIM_MONITORING_FILES_COUNT          "(6318): Number of indexed files %s scanning: %u"
#define FIM_CONFIGURATION_NOTFOUND          "(6319): No configuration found for (%s):'%s'"
#define FIM_PROCESS_PRIORITY                "(6320): Setting process priority to: '%d'"
#define FIM_SEND                            "(6321): Sending FIM event: %s"
#define FIM_AUDIT_ALREADY_ADDED             "(6322): Already added audit rule for monitoring directory: '%s'"
#define FIM_REALTIME_DIRECTORYCHANGES       "(6323): Unable to set 'ReadDirectoryChangesW' for path: '%s'. Error(%lu): '%s'"
#define FIM_HASHES_FAIL                     "(6324): Couldn't generate hashes for '%s'"
#define FIM_EXTRACT_PERM_FAIL               "(6325): It was not possible to extract the permissions of '%s'. Error: %d"
#define FIM_RBTREE_DUPLICATE_INSERT         "(6326): Couldn't insert entry, duplicate path: '%s'"
#define FIM_HASH_INSERT_INODE_HASH          "(6327): Unable to add inode to db: '%s' => '%s'"
#define FIM_RBTREE_REPLACE                  "(6328): Unable to update file to db, key not found: '%s'"
#define FIM_REGISTRY_EVENT_FAIL             "(6329): Unable to save registry key: '%s'"
#define FIM_RUNNING_SCAN                    "(6330): The scan has been running during: %.3f sec (%.3f clock sec)"
#define FIM_GET_ATTRIBUTES                  "(6331): Couldn't get attributes for file: '%s'"
#define FIM_WARN_REALTIME_UNSUPPORTED       "(6332): Realtime monitoring request on unsupported system."
#define FIM_WARN_WHODATA_UNSUPPORTED        "(6333): Whodata monitoring request on unsupported system."
#define FIM_AUDIT_INVALID_AUID              "(6334): Audit: Invalid 'auid' value read. Check Audit configuration (PAM)."
#define FIM_ENTRIES_INFO                    "(6335): Fim file entries count: '%d'"
#define FIM_INODES_INFO                     "(6336): Fim inode entries: '%d', path count: '%d'"
#define FIM_WHODATA_INVALID_UNKNOWN_UID     "(6337): The user ID could not be extracted from the event."
#define FIM_EMPTY_DIRECTORIES_CONFIG        "(6338): Empty directories tag found in the configuration."
#define FIM_PERSIST                         "(6339): Persisting FIM event: %s"

#define FIM_DELETE_DB_TRY                   "(6340): Failed to delete FIM database '%s'- %dº try."
#define FIM_DELETE_DB                       "(6341): Failed to delete FIM database '%s'."
#define FIM_FILE_LIMIT_VALUE                "(6342): Maximum number of files to be monitored: '%u'"
#define FIM_LIMIT_UNLIMITED                 "(6343): No limit set to maximum number of %s entries to be monitored"
#define FIM_INOTIFY_WATCH_DELETED           "(6344): Inotify watch deleted for '%s'"
#define FIM_NUM_WATCHES                     "(6345): Folders monitored with real-time engine: %u"
#define FIM_REALTIME_CALLBACK               "(6346): Realtime watch deleted for '%s'"
#define FIM_DIR_RECURSION_LEVEL             "(6347): Directory '%s' is already on the max recursion_level (%d), it will not be scanned."
#define FIM_DIFF_FOLDER_SIZE                "(6348): Size of '%s' folder: %.5f KB."
#define FIM_BIG_FILE_REPORT_CHANGES         "(6349): File '%s' is too big for configured maximum size to perform diff operation."
#define FIM_DISK_QUOTA_LIMIT_REACHED        "(6350): The %s of the file size '%s' exceeds the disk_quota. Operation discarded."
#define FIM_DIFF_IDENTICAL_MD5_FILES        "(6351): The files are identical, don't compute differences"
#define FIM_DIFF_COMMAND_OUTPUT_EQUAL       "(6352): Command diff/fc output 0, files are the same"
#define FIM_EMPTY_REGISTRY_CONFIG           "(6353): Empty windows_registry tag found in the configuration."
#define FIM_REGISTRY_ENTRIES_INFO           "(6354): Fim registry entries count: '%d'"
#define FIM_DIFF_FOLDER_NOT_EXIST           "(6355): Can't remove folder '%s', it does not exist."
#define FIM_DIFF_FILE_SIZE_LIMIT            "(6356): Maximum file size limit to generate diff information configured to '%d KB' for '%s'."
#define FIM_DISK_QUOTA_LIMIT                "(6357): Maximum disk quota size limit configured to '%d KB'."
#define FIM_DIFF_FOLDER_DELETED             "(6358): Folder '%s' has been deleted."
#define GLOB_NO_MATCH                       "(6359): No matches found for the glob pattern: '%s'"
#define FIM_DB_FAIL_TO_GET_SCANNED_FILE     "(6360): Failed to get scanned value of '%s' - %s"
#define FIM_WILDCARDS_UPDATE_START          "(6361): Starting configuration wildcards update."
#define FIM_WILDCARDS_REMOVE_DIRECTORY      "(6362): Removing entry '%s' due to it has not been expanded by the wildcards"
#define FIM_WILDCARDS_UPDATE_FINALIZE       "(6363): Configuration wildcards update finalize."
#define FIM_REALTIME_MAXNUM_WATCHES         "(6364): Unable to add directory to real time monitoring: '%s' - Maximum size permitted."
#define FIM_ADDED_RULE_TO_FILE              "(6365): Added directory '%s' to audit rules file."
#define FIM_WHODATA_STATE_CHECKER           "(6366): Starting check of Windows Audit Policies and SACLs."
#define FIM_WHODATA_POLICY_OPENED           "(6367): Audit policy opened successfully. Audit mode enabled."
#define FIM_WHODATA_OBJECT_ACCESS           "(6368): Detected Audit Object Access category, checking subcategories. GUID: %s"
#define FIM_WHODATA_SUCCESS_POLICY          "(6369): Found Audit %s subcategory configured to success. GUID: %s"
#define FIM_REGISTRY_LIMIT_VALUE            "(6370): Maximum number of registry values to be monitored: '%u'"
#define FIM_REGISTRY_VALUES_ENTRIES_INFO    "(6371): Fim registry values entries count: '%d'"
#define FIM_WILDCARDS_REGISTERS_START       "(6372): Starting configuration for Windows registry wildcards."
#define FIM_WILDCARDS_ADD_REGISTER          "(6373): Expanding entry '%s' to '%s' to monitor FIM events."
#define FIM_WILDCARDS_REGISTERS_FINALIZE    "(6374): Wildcard configuration successfully completed."
#define FIM_REG_VAL_INVALID_TYPE            "(6375): Invalid registry value type for report_changes. Registry key: '%s'. Registry value: '%s'."
#define FIM_EBPF_LIB_LOADED                 "(6376): All functions loaded successfully from libbpf.so."

/* Modules messages */
#define WM_UPGRADE_RESULT_AGENT_INFO         "(8151): Agent Information obtained: '%s'"
#define WM_UPGRADE_MODULE_DISABLED           "(8152): Module Agent Upgrade disabled. Exiting..."
#define WM_UPGRADE_MODULE_STARTED            "(8153): Module Agent Upgrade started."
#define WM_UPGRADE_MODULE_FINISHED           "(8154): Module Agent Upgrade finished."
#define WM_UPGRADE_INCOMMING_MESSAGE         "(8155): Incomming message: '%s'"
#define WM_UPGRADE_RESPONSE_MESSAGE          "(8156): Response message: '%s'"
#define WM_UPGRADE_TASK_SEND_MESSAGE         "(8157): Sending message to task_manager module: '%s'"
#define WM_UPGRADE_TASK_RECEIVE_MESSAGE      "(8158): Receiving message from task_manager module: '%s'"
#define WM_UPGRADE_EMPTY_MESSAGE             "(8159): Empty message from local client."
#define WM_UPGRADE_NO_AGENTS_TO_UPGRADE      "(8160): There are no valid agents to upgrade."
#define WM_UPGRADE_DOWNLOADING_WPK           "(8161): Downloading WPK file from: '%s'"
#define WM_UPGRADE_SENDING_WPK_TO_AGENT      "(8162): Sending WPK to agent: '%.3d'"
#define WM_UPGRADE_ACK_MESSAGE               "(8163): Sending upgrade ACK event: '%s'"
#define WM_UPGRADE_ACK_RECEIVED              "(8164): Received upgrade notification from agent '%d'. Error code: '%d', message: '%s'"
#define WM_UPGRADE_REQUEST_SEND_MESSAGE      "(8165): Sending message to agent: '%s'"
#define WM_UPGRADE_REQUEST_RECEIVE_MESSAGE   "(8166): Receiving message from agent: '%s'"
#define WM_UPGRADE_UPGRADE_FILE_AGENT        "(8167): Upgrade result file has been successfully erased from the agent."
#define WM_UPGRADE_TASK_SEND_CLUSTER_MESSAGE "(8168): Sending sendsync message to task manager in master node: '%s'"
#define WM_UPGRADE_DIFF_PACKAGE_NO_FORCE     "(8169): Agent '%d' with platform '%s' won't be upgraded using package '%s' without the force option. Ignoring..."
#define WM_UPGRADE_DIFF_PACKAGE_FORCE        "(8170): Agent '%d' with platform '%s' will be upgraded using package '%s'"
#define WM_UPGRADE_UNSUPPORTED_UPGRADE       "(8171): Agent '%d' with unsupported platform '%s' won't be upgraded without a default package."
#define WM_UPGRADE_UNSUPPORTED_DEFAULT       "(8172): Agent '%d' with unsupported platform '%s' will be upgraded with package '%s'"

#define MOD_TASK_START                      "(8200): Module Task Manager started."
#define MOD_TASK_FINISH                     "(8201): Module Task Manager finished."
#define MOD_TASK_DISABLED                   "(8202): Module disabled. Exiting..."
#define MOD_TASK_EMPTY_MESSAGE              "(8203): Empty message from local client."
#define MOD_TASK_INCOMMING_MESSAGE          "(8204): Incomming message: '%s'"
#define MOD_TASK_RESPONSE_MESSAGE           "(8205): Response to message: '%s'"
#define MOD_TASK_DISABLED_WORKER            "(8207): Module Task Manager only runs on Master nodes in cluster configuration."
#define MOD_TASK_TASKS_DB_ERROR_IN_QUERY    "(8208): Tasks DB Error reported in the result of the query, message: '%s'"
#define MOD_TASK_TASKS_DB_ERROR_EXECUTE     "(8209): Tasks DB Cannot execute SQL query: err database '%s/%s.db'"

/* Generic messages */
#define SUCCESSFULLY_RECONNECTED_SOCKET     "(8300): Successfully reconnected to '%s'"

/* Logcollector */

#define LOGCOLLECTOR_FILE_NOT_EXIST           "(9000): File '%s' no longer exists."
#define LOGCOLLECTOR_SOCKET_TARGET            "(9001): Socket target for '%s' -> %s"

#define LOGCOLLECTOR_JOURNAL_LOG_NOT_SYSLOG   "(9002): Failed to get the required fields, discarted log with timestamp '%" PRIu64 "'"
#define LOGCOLLECTOR_JOURNAL_LOG_FIELD_ERROR  "(9003): Failed to get data field '%s' from entry with timestamp '%" PRIu64 "'. Error: %s"
#define LOGCOLLECTOR_JOURNAL_LOG_CHECK_FILTER "(9004): Checking filters for timestamp '%s'"
#define LOGCOLLECTOR_JOURNAL_LOG_NOT_OWNER    "(9005): Skipping is not the owner of the journal log."
#define LOGCOLLECTOR_JOURNAL_LOG_NO_NEW       "(9006): No new entries in the journal."
#define LOGCOLLECTOR_JOURNAL_LOG_TRUNCATED    "(9007): Message size > maximum allowed, The message will be truncated."
#define LOGCOLLECTOR_JOURNAL_LOG_READING      "(9008): Reading from journal: '%s'."
#define LOGCOLLECTOR_JOURNAL_LOG_SET_LAST     "(9009): Setting last read timestamp to '%" PRIu64 "'"


#endif /* DEBUG_MESSAGES_H */
