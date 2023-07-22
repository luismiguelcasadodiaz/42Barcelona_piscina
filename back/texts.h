/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texts.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:47:34 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/22 21:29:03 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef TEXTS_H
# define TEXTS_H

/* ************************************************************************** */
/* ft_strlen counts all char in str but last one when it is '\0' bounded      */
/*                                                                            */
/* ************************************************************************** */
int		ft_strlen(char *str);
/* ************************************************************************** */
/* ft_strcpy copies src, including '\0' into dst.                             */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src);
/* ************************************************************************** */
/* process_str  extrats from a string all text chunks separated by any of     */
/*              the char inside charset.                                      */
/*                                                                            */
/* RETURNS a pointer of pointers                                              */
/* ************************************************************************** */
char	**process_str(char *str, char *charset, char **items);
#endif
